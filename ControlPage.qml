import QtQuick 2.0

Rectangle
{
    id:controlPage
    color: "transparent"

    property real oldxVal: 0.0
    property real oldyVal: 0.0
    property int speed: 0

    property int horDir_FW: 0
    property int horDir_BW: 1

    property int verDir_FW: 0
    property int verDir_BW: 1

    property bool trackingEnabled: false

    Image
    {
        source: "qrc:images/controlPage.png"
        anchors.centerIn: parent
    }

    Image
    {
        source: "qrc:images/vigasan.png"
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.top: parent.top
        anchors.topMargin: -20
        scale: 0.5
    }

    JoyPad
    {
        id:joyPad
        width:300
        height:300
        anchors.centerIn:parent

        onReleased:
        {
            if(trackingEnabled === false)
            {
                stepper1.softStop();
                stepper2.softStop();
            }
            //position.text = "x: " + xVal.toFixed(2) + "  " + "y: " + yVal.toFixed(2);
        }

        onSendParameter:
        {
            //position.text = "x: " + xVal.toFixed(2) + "  " + "y: " + yVal.toFixed(2);
            if(Math.abs(xVal - oldxVal) > 0.1)
            {
                if(xVal > 0.0)
                {
                    speed = Math.round(xVal * 1000 * stepper1Speed.paramValue);
                    stepper1.run(horDir_FW, speed);

                } else
                {
                    speed = Math.round(-1 * xVal * 1000 * stepper1Speed.paramValue);
                    stepper1.run(horDir_BW, speed);
                }
                oldxVal = xVal;
            }

            if(Math.abs(yVal - oldyVal) > 0.1)
            {
                if(yVal > 0.0)
                {
                    speed = Math.round(yVal * 1000 * stepper2Speed.paramValue);
                    stepper2.run(verDir_FW, speed);
                } else
                {
                    speed = Math.round(-1 * yVal * 1000 * stepper2Speed.paramValue);
                    stepper2.run(verDir_BW, speed);
                }
                oldyVal = yVal;
            }
        }
    }

    Switch
    {
        id: swTracking
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 10
        anchors.horizontalCenter: parent.horizontalCenter
        backgroundWidth: 80
        backgroundHeight: 40
        colore: "#FFA500"//"#67bf31"

        onSwitched:
        {
            if(on === true)
            {
                trackingEnabled = true;
                strTracking.text = "Hold ON"
                joyPad.resetOnRelease = false;
            } else
            {
                trackingEnabled = false;
                strTracking.text = "Hold OFF"
                joyPad.resetOnRelease = true;
                joyPad.reset();
                stepper1.softStop();
                stepper2.softStop();
            }
        }

    }

    Text
    {
        id: strTracking
        text: "Hold OFF"
        anchors.bottom: swTracking.top
        anchors.bottomMargin: 5
        anchors.horizontalCenter: swTracking.horizontalCenter
        font.pixelSize: 15
        font.family: typeFont.name
        color: "white"
    }

    ////////////////////////////////////////////////////////////////////////////////
    // Stepper 1 Controls
    ////////////////////////////////////////////////////////////////////////////////
    Rectangle
    {
        id: rectStepper1Params
        width: 240
        height: 470
        anchors.left: parent.left
        anchors.leftMargin: 5
        anchors.top: parent.top
        anchors.topMargin: 5
        color: "transparent"

        Text
        {
            id: strStepperTitle1
            text: "Stepper 1"
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.top: parent.top
            anchors.topMargin: 25
            font.pixelSize: 20
            font.family: typeFont_Bold.name
            color: "white"
        }

        ItemParameter
        {
            id: stepper1Speed
            anchors.top: strStepperTitle1.bottom
            anchors.topMargin: 10
            width: parent.width
            paramName: "Speed"
            paramUnit: " "
            minValue: 1
            maxValue: 50
            paramValue: 5
            delta: 1
        }

        Switch
        {
            id: swEnableStepper1
            anchors.top: stepper1Speed.bottom
            anchors.topMargin: 60
            anchors.horizontalCenter: parent.horizontalCenter
            backgroundWidth: 80
            backgroundHeight: 40
            colore: "#FFA500"
            state: "on"

            onSwitched:
            {
                if(on === true)
                {
                    joyPad.horizontalEnabled = true;
                    strSwEnableStepper1.text = "Enabled";
                } else
                {
                    joyPad.horizontalEnabled = false;
                    strSwEnableStepper1.text = "Disabled";
                }
            }

        }

        Text
        {
            id: strSwEnableStepper1
            text: "Enabled"
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.bottom: swEnableStepper1.top
            anchors.bottomMargin: 10
            font.pixelSize: 15
            font.family: typeFont.name
            color: "white"
        }

        Switch
        {
            id: swDirStepper1
            anchors.top: swEnableStepper1.bottom
            anchors.topMargin: 60
            anchors.horizontalCenter: parent.horizontalCenter
            backgroundWidth: 80
            backgroundHeight: 40
            colore: "#FFA500"//"#67bf31"

            onSwitched:
            {
                if(on === true)
                {
                    horDir_FW = 1;
                    horDir_BW = 0;
                } else
                {
                    horDir_FW = 0;
                    horDir_BW = 1;
                }
            }

        }

        Text
        {
            id: strDirStepper1
            text: "Revert Direction"
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.bottom: swDirStepper1.top
            anchors.bottomMargin: 10
            font.pixelSize: 15
            font.family: typeFont.name
            color: "white"
        }


        Text
        {
            id: strPosition1
            text: "Position [step]"
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.top: swDirStepper1.bottom
            anchors.topMargin: 30
            font.pixelSize: 18
            font.family: typeFont_Bold.name
            color: "white"
        }

        Text
        {
            id: positionValue1
            text: "-----"
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.top: strPosition1.bottom
            anchors.topMargin: 5
            font.pixelSize: 25
            font.family: typeFont_Bold.name
            color: "#FFA500"
        }

        Rectangle
        {
            id:btnReset1
            width: 100
            height: 40
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.top: positionValue1.bottom
            anchors.topMargin: 20
            color: "transparent"
            border.width: 1
            border.color: "white"
            radius: 5

            Text
            {
                text: "RESET"
                anchors.centerIn: parent
                font.pixelSize: 18
                font.family: typeFont.name
                color: "white"
            }

            MouseArea
            {
                anchors.fill: parent
                onPressed:
                {
                    stepper1.Position = 0;
                    btnReset1.color = "lightgreen";
                }

                onReleased:
                {
                    btnReset1.color = "transparent"
                }
            }
        }
    }


    Image
    {
        id: settingsStepper1
        source: "qrc:images/settings.png"
        anchors.top: parent.top
        anchors.topMargin: 15
        anchors.left: rectStepper1Params.right
        anchors.leftMargin: 15
        scale: 0.8

        MouseArea
        {
            anchors.fill: parent
            onPressed:
            {
                stepper1.updateParameters();
                rootPage.reqSetting1Page();
            }
        }
    }


    ////////////////////////////////////////////////////////////////////////////////
    // Stepper 2 Controls
    ////////////////////////////////////////////////////////////////////////////////
    Rectangle
    {
        id: rectStepper2Params
        width: 240
        height: 470
        anchors.right: parent.right
        anchors.rightMargin: 5
        anchors.top: parent.top
        anchors.topMargin: 5
        color: "transparent"

        Text
        {
            id: strStepperTitle2
            text: "Stepper 2"
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.top: parent.top
            anchors.topMargin: 25
            font.pixelSize: 20
            font.family: typeFont_Bold.name
            color: "white"
        }

        ItemParameter
        {
            id: stepper2Speed
            anchors.top: strStepperTitle2.bottom
            anchors.topMargin: 10
            width: parent.width
            paramName: "Speed"
            paramUnit: " "
            minValue: 1
            maxValue: 50
            paramValue: 5
            delta: 1
        }

        Switch
        {
            id: swEnableStepper2
            anchors.top: stepper2Speed.bottom
            anchors.topMargin: 60
            anchors.horizontalCenter: parent.horizontalCenter
            backgroundWidth: 80
            backgroundHeight: 40
            colore: "#FFA500"
            state: "on"

            onSwitched:
            {
                if(on === true)
                {
                    joyPad.verticalEnabled = true;
                    strSwEnableStepper2.text = "Enabled";
                } else
                {
                    joyPad.verticalEnabled = false;
                    strSwEnableStepper2.text = "Disabled";
                }
            }

        }

        Text
        {
            id: strSwEnableStepper2
            text: "Enabled"
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.bottom: swEnableStepper2.top
            anchors.bottomMargin: 10
            font.pixelSize: 15
            font.family: typeFont.name
            color: "white"
        }

        Switch
        {
            id: swDirStepper2
            anchors.top: swEnableStepper2.bottom
            anchors.topMargin: 60
            anchors.horizontalCenter: parent.horizontalCenter
            backgroundWidth: 80
            backgroundHeight: 40
            colore: "#FFA500"//"#67bf31"

            onSwitched:
            {
                if(on === true)
                {
                    verDir_FW = 1;
                    verDir_BW = 0;
                } else
                {
                    verDir_FW = 0;
                    verDir_BW = 1;
                }
            }

        }

        Text
        {
            id: strDirStepper2
            text: "Revert Direction"
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.bottom: swDirStepper2.top
            anchors.bottomMargin: 10
            font.pixelSize: 15
            font.family: typeFont.name
            color: "white"
        }

        Text
        {
            id: strPosition2
            text: "Position [step]"
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.top: swDirStepper2.bottom
            anchors.topMargin: 30
            font.pixelSize: 18
            font.family: typeFont_Bold.name
            color: "white"
        }

        Text
        {
            id: positionValue2
            text: "-----"
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.top: strPosition2.bottom
            anchors.topMargin: 5
            font.pixelSize: 25
            font.family: typeFont_Bold.name
            color: "#FFA500"
        }

        Rectangle
        {
            id:btnReset2
            width: 100
            height: 40
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.top: positionValue2.bottom
            anchors.topMargin: 20
            color: "transparent"
            border.width: 1
            border.color: "white"
            radius: 5

            Text
            {
                text: "RESET"
                anchors.centerIn: parent
                font.pixelSize: 18
                font.family: typeFont.name
                color: "white"
            }

            MouseArea
            {
                anchors.fill: parent
                onPressed:
                {
                    stepper2.Position = 0;
                    btnReset2.color = "lightgreen";
                }

                onReleased:
                {
                    btnReset2.color = "transparent"
                }
            }
        }
    }

    Image
    {
        id: settingsStepper2
        source: "qrc:images/settings.png"
        anchors.top: parent.top
        anchors.topMargin: 15
        anchors.right: rectStepper2Params.left
        anchors.rightMargin: 15
        scale: 0.8

        MouseArea
        {
            anchors.fill: parent
            onPressed:
            {
                stepper2.updateParameters();
                rootPage.reqSetting2Page();
            }
        }
    }


    Connections
    {
       target: stepper1

       onPositionChanged:
       {
           positionValue1.text = stepper1.Position;
       }
    }

    Connections
    {
       target: stepper2

       onPositionChanged:
       {
           positionValue2.text = stepper2.Position;
       }
    }


}
