import QtQuick 2.0

Item
{
    id:joyStick
    property int offset:30

    property real xVal: 0.0
    property real yVal: 0.0

    property int angleDeg: 0
    property int lastAngleDeg: 0
    property int counter: 0
    property int direction: 0
    property int lastDirection: 0


    property color handleGrad1: "lightgray"
    property color handleGrad2: "gray"

    signal pressed()
    signal released()
    signal sendParameter()
    signal increment()
    signal decrement()

    Rectangle
    {
        id:totalArea
        color:"gray"
        radius: parent.width/2
        opacity: 0.5
        width:parent.width;
        height:parent.height
    }

    Text
    {
        id: txtPosition
        text: angleDeg
        anchors.centerIn: parent
        color: "white"
        font.pointSize: 20
    }

    Rectangle
    {
        id:stick
        width:totalArea.width / 4;
        height: width
        radius: width / 2
        x: totalArea.width / 2 - radius;
        y: 0 - radius//totalArea.height / 2 - radius;
        gradient: Gradient
        {
            GradientStop { position: 0.0; color: handleGrad1 }
            GradientStop { position: 1.0; color: handleGrad1 }
        }

        /*
        Behavior on x
        {
            NumberAnimation
            {
                duration: 300
                easing.type: Easing.OutQuad
            }
        }

        Behavior on y
        {
            NumberAnimation
            {
                duration: 300
                easing.type: Easing.OutQuad
            }
        }
        */
    }

    MouseArea
    {
        id:mouseArea
        anchors.fill: parent

        onPressed:
        {
            joyStick.pressed();
        }

        onPositionChanged:
        {
            //(x-center_x)^2 + (y - center_y)^2 < radius^2
            //if stick need to remain inside larger circle
            //var rad = (totalArea.radius - stick.radius);
            //if stick can go outside larger circle
            var rad = totalArea.radius;
            rad =  rad * rad;

            // calculate distance in x direction
            var xDist = mouseX - (totalArea.x + totalArea.radius);


            xDist = xDist * xDist;



            // calculate distance in y direction
            var yDist = mouseY - (totalArea.y + totalArea.radius);

            yDist = yDist * yDist;

            //total distance for inner circle
            var dist = xDist + yDist;

            //if distance if less then radius then inner circle is inside larger circle

            //if(dist > rad)
            {
                // return;
                var angle = Math.atan2(mouseY - totalArea.radius, mouseX - totalArea.radius);


                //var degree = angle * 180 / Math.PI;
                //angleDeg = (degree + 360) % 360;

                var degree = angle * 200 / Math.PI;
                angleDeg = (degree + 400) % 400;


                if(angleDeg > lastAngleDeg)
                {
                    direction = 1;
                    if(direction != lastDirection)
                        stepper1.stepClock(direction);

                    stepper1.clock();
                    counter++;
                    //joyStick.increment();
                }else if(angleDeg < lastAngleDeg)
                {
                    direction = 0;
                    if(direction != lastDirection)
                        stepper1.stepClock(direction);
                    stepper1.clock();
                    counter--;
                    //joyStick.decrement();
                }


                lastAngleDeg = angleDeg;
                lastDirection = direction;

                var xCorr = Math.cos(angle) * totalArea.radius + totalArea.radius;
                var yCorr = Math.sin(angle) * totalArea.radius + totalArea.radius;

                xVal = (xCorr - (totalArea.x + totalArea.radius)) / totalArea.radius;
                yVal = -1 * (yCorr - (totalArea.y + totalArea.radius)) / totalArea.radius;

                stick.x = xCorr - stick.radius;
                stick.y = yCorr - stick.radius;

            }
            /*
            else
            {
                var oldX = stick.x; var oldY = stick.y;
                xVal = (mouseX - (totalArea.x + totalArea.radius)) / totalArea.radius;
                yVal = -1 * (mouseY - (totalArea.y + totalArea.radius)) / totalArea.radius;
                stick.x = mouseX - stick.radius;
                stick.y = mouseY - stick.radius;
            }
            */

            joyStick.sendParameter();

        }

        /*
        onReleased:
        {
            //snap to center

            xVal = 0.0;
            yVal = 0.0;
            stick.x = totalArea.width /2 - stick.radius;
            stick.y = totalArea.height/2 - stick.radius;

            joyStick.released();
        }
        */
    }
}
