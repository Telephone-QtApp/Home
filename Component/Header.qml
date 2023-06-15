import QtQuick 2.9
import QtQuick.Controls 2.15
import "../DataHMI/Res/resources.js" as RESOURCES

Item {
    id: rootItem
    width: 700
    height: 50

    Rectangle {
        id: backgroundHeader
        anchors.fill: parent
        color: "transparent"

        Image {
            id: batteryImage
            width: 45
            height: 40
            anchors {
                right: parent.right
                rightMargin: 50
                verticalCenter: parent.verticalCenter
            }
            source: "qrc:/Assets/soon_full_battery_icon.png"
        }

        Image {
            id: wifiImage
            width: 45
            height: 40
            anchors {
                right: parent.right
                rightMargin: 120
                verticalCenter: parent.verticalCenter
            }
            source: "qrc:/Assets/wifi_full_icon.png"
        }

        Text {
            id: timeRec
            anchors {
                left: parent.left
                leftMargin: 50
                verticalCenter: parent.verticalCenter
            }
            font.pixelSize: 32
            color: "white"
            text: qsTr("22:22")
        }
    }


}
