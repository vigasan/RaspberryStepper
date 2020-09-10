import QtQuick 2.0

Rectangle
{
    id: stepperParams
    color: "transparent"
    property int sliderWidth: 500

    Rectangle
    {
        id: sldContainer
        width: sliderWidth
        height: parent.height
        anchors.left: parent.left
        anchors.leftMargin: 80
        anchors.verticalCenter: parent.verticalCenter
        color: "transparent"

        ItemParameter
        {
            id: param_maxSpeed
            anchors.top: parent.top
            anchors.topMargin: 10
            width: sliderWidth
            paramName: "Max Speed"
            paramUnit: " "
            minValue: 0
            maxValue: 1023
            delta: 1
            onSendParameter:
            {
                stepper1.MaxSpeed = paramValue;
            }
        }

        ItemParameter
        {
            id: param_thrSpeed
            anchors.top: param_maxSpeed.bottom
            width: sliderWidth
            paramName: "Threshold"
            paramUnit: " "
            minValue: 0
            maxValue: 1023
            delta: 1
            onSendParameter:
            {
                stepper1.ThresholdSpeed = paramValue;
            }
        }

        ItemParameter
        {
            id: param_acceleration
            anchors.top: param_thrSpeed.bottom
            width: sliderWidth
            paramName: "Acceleration"
            paramUnit: " "
            minValue: 0
            maxValue: 4095
            delta: 1
            onSendParameter:
            {
                stepper1.Acceleration = paramValue;
            }
        }

        ItemParameter
        {
            id: param_deceleration
            anchors.top: param_acceleration.bottom
            width: sliderWidth
            paramName: "Deceleration"
            paramUnit: " "
            minValue: 0
            maxValue: 4095
            delta: 1
            onSendParameter:
            {
                stepper1.Deceleration = paramValue;
            }
        }

        ItemParameter
        {
            id: param_holdTorque
            anchors.top: param_deceleration.bottom
            width: sliderWidth
            paramName: "Hold Torque"
            paramUnit: " "
            minValue: 0
            maxValue: 255
            delta: 1
            onSendParameter:
            {
                stepper1.KValHold = paramValue;
            }
        }

        ItemParameter
        {
            id: param_accTorque
            anchors.top: param_holdTorque.bottom
            width: sliderWidth
            paramName: "Acceleration Torque"
            paramUnit: " "
            minValue: 0
            maxValue: 255
            delta: 1
            onSendParameter:
            {
                stepper1.KValAcc = paramValue;
            }
        }

        ItemParameter
        {
            id: param_runTorque
            anchors.top: param_accTorque.bottom
            width: sliderWidth
            paramName: "Run Torque"
            paramUnit: " "
            minValue: 0
            maxValue: 255
            delta: 1
            onSendParameter:
            {
                stepper1.KValRun = paramValue;
            }
        }

        ItemParameter
        {
            id: param_decTorque
            anchors.top: param_runTorque.bottom
            width: sliderWidth
            paramName: "Deceleration Torque"
            paramUnit: " "
            minValue: 0
            maxValue: 255
            delta: 1
            onSendParameter:
            {
                stepper1.KValDec = paramValue;
            }
        }

    }

    ///////////////////////////////////////////////////////////////////////////////
    // Step Mode Radio Buttons
    ///////////////////////////////////////////////////////////////////////////////
    Rectangle
    {
        id: rectStepMode
        width: 200
        height: parent.height
        anchors.right: parent.right
        anchors.verticalCenter: parent.verticalCenter
        color: "transparent"

        RadioButton
        {
            id: rbStpModeFull
            anchors.left: parent.left
            anchors.top: parent.top
            anchors.topMargin: 25
            name: "FULL STEP"
            onSendParameter:
            {
                rbStpModeFull.active = true;
                rbStpModeHalf.active = false;
                rbStpMode4uStep.active = false;
                rbStpMode8uStep.active = false;
                rbStpMode16uStep.active = false;
                rbStpMode32uStep.active = false;
                rbStpMode64uStep.active = false;
                rbStpMode128uStep.active = false;
                stepper1.StepMode = stepMODE_FULL_STEP;
            }

        }

        RadioButton
        {
            id: rbStpModeHalf
            anchors.left: parent.left
            anchors.top: rbStpModeFull.bottom
            anchors.topMargin: 15
            name: "HALF STEP"
            onSendParameter:
            {
                rbStpModeFull.active = false;
                rbStpModeHalf.active = true;
                rbStpMode4uStep.active = false;
                rbStpMode8uStep.active = false;
                rbStpMode16uStep.active = false;
                rbStpMode32uStep.active = false;
                rbStpMode64uStep.active = false;
                rbStpMode128uStep.active = false;
                stepper1.StepMode = stepMODE_HALF_STEP;
            }
        }

        RadioButton
        {
            id: rbStpMode4uStep
            anchors.left: parent.left
            anchors.top: rbStpModeHalf.bottom
            anchors.topMargin: 15
            name: "1/4 MICROSTEP"
            onSendParameter:
            {
                rbStpModeFull.active = false;
                rbStpModeHalf.active = false;
                rbStpMode4uStep.active = true;
                rbStpMode8uStep.active = false;
                rbStpMode16uStep.active = false;
                rbStpMode32uStep.active = false;
                rbStpMode64uStep.active = false;
                rbStpMode128uStep.active = false;
                stepper1.StepMode = stepMODE_uSTEP_4;
            }
        }

        RadioButton
        {
            id: rbStpMode8uStep
            anchors.left: parent.left
            anchors.top: rbStpMode4uStep.bottom
            anchors.topMargin: 15
            name: "1/8 MICROSTEP"
            onSendParameter:
            {
                rbStpModeFull.active = false;
                rbStpModeHalf.active = false;
                rbStpMode4uStep.active = false;
                rbStpMode8uStep.active = true;
                rbStpMode16uStep.active = false;
                rbStpMode32uStep.active = false;
                rbStpMode64uStep.active = false;
                rbStpMode128uStep.active = false;
                stepper1.StepMode = stepMODE_uSTEP_8;
            }
        }

        RadioButton
        {
            id: rbStpMode16uStep
            anchors.left: parent.left
            anchors.top: rbStpMode8uStep.bottom
            anchors.topMargin: 15
            name: "1/16 MICROSTEP"
            onSendParameter:
            {
                rbStpModeFull.active = false;
                rbStpModeHalf.active = false;
                rbStpMode4uStep.active = false;
                rbStpMode8uStep.active = false;
                rbStpMode16uStep.active = true;
                rbStpMode32uStep.active = false;
                rbStpMode64uStep.active = false;
                rbStpMode128uStep.active = false;
                stepper1.StepMode = stepMODE_uSTEP_16;
            }
        }

        RadioButton
        {
            id: rbStpMode32uStep
            anchors.left: parent.left
            anchors.top: rbStpMode16uStep.bottom
            anchors.topMargin: 15
            name: "1/32 MICROSTEP"
            onSendParameter:
            {
                rbStpModeFull.active = false;
                rbStpModeHalf.active = false;
                rbStpMode4uStep.active = false;
                rbStpMode8uStep.active = false;
                rbStpMode16uStep.active = false;
                rbStpMode32uStep.active = true;
                rbStpMode64uStep.active = false;
                rbStpMode128uStep.active = false;
                stepper1.StepMode = stepMODE_uSTEP_32;
            }
        }

        RadioButton
        {
            id: rbStpMode64uStep
            anchors.left: parent.left
            anchors.top: rbStpMode32uStep.bottom
            anchors.topMargin: 15
            name: "1/64 MICROSTEP"
            onSendParameter:
            {
                rbStpModeFull.active = false;
                rbStpModeHalf.active = false;
                rbStpMode4uStep.active = false;
                rbStpMode8uStep.active = false;
                rbStpMode16uStep.active = false;
                rbStpMode32uStep.active = false;
                rbStpMode64uStep.active = true;
                rbStpMode128uStep.active = false;
                stepper1.StepMode = stepMODE_uSTEP_64;
            }
        }

        RadioButton
        {
            id: rbStpMode128uStep
            anchors.left: parent.left
            anchors.top: rbStpMode64uStep.bottom
            anchors.topMargin: 15
            name: "1/128 MICROSTEP"
            onSendParameter:
            {
                rbStpModeFull.active = false;
                rbStpModeHalf.active = false;
                rbStpMode4uStep.active = false;
                rbStpMode8uStep.active = false;
                rbStpMode16uStep.active = false;
                rbStpMode32uStep.active = false;
                rbStpMode64uStep.active = false;
                rbStpMode128uStep.active = true;
                stepper1.StepMode = stepMODE_uSTEP_128;
            }
        }

    }


    Image
    {
        id: back
        source: "qrc:images/back.png"
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 10
        anchors.left: parent.left
        anchors.leftMargin: 10
        scale: 0.8

        MouseArea
        {
            anchors.fill: parent
            onPressed:
            {
                stepper1.saveParameters();
                rootPage.reqControlPage();
            }
        }
    }



    Connections
    {
        target: stepper1

        onMaxSpeedChanged:
        {
            param_maxSpeed.paramValue = stepper1.MaxSpeed;
        }

        onThresholdSpeedChanged:
        {
            param_thrSpeed.paramValue = stepper1.ThresholdSpeed;
        }

        onAccelerationChanged:
        {
            param_acceleration.paramValue = stepper1.Acceleration;
        }

        onDecelerationChanged:
        {
            param_deceleration.paramValue = stepper1.Deceleration;
        }

        onKValHoldChanged:
        {
            param_holdTorque.paramValue = stepper1.KValHold;
        }

        onKValAccChanged:
        {
            param_accTorque.paramValue = stepper1.KValAcc;
        }

        onKValRunChanged:
        {
            param_runTorque.paramValue = stepper1.KValRun;
        }

        onKValDecChanged:
        {
            param_decTorque.paramValue = stepper1.KValDec;
        }

        onStepModeChanged:
        {
            switch(stepper1.StepMode)
            {
                case stepMODE_FULL_STEP: rbStpModeFull.active = true; break;
                case stepMODE_HALF_STEP: rbStpModeHalf.active = true; break;
                case stepMODE_uSTEP_4: rbStpMode4uStep.active = true; break;
                case stepMODE_uSTEP_8: rbStpMode8uStep.active = true; break;
                case stepMODE_uSTEP_16: rbStpMode16uStep.active = true; break;
                case stepMODE_uSTEP_32: rbStpMode32uStep.active = true; break;
                case stepMODE_uSTEP_64: rbStpMode64uStep.active = true; break;
                case stepMODE_uSTEP_128: rbStpMode128uStep.active = true; break;
            }
        }

    }

}
