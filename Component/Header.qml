import QtQuick 2.9
import QtQuick.Controls 2.15

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
            width: 38
            height: 34
            anchors {
                right: parent.right
                rightMargin: 5
                verticalCenter: parent.verticalCenter
            }
            source: "qrc:/Assets/soon_full_battery_icon.png"
        }

        Image {
            id: wifiImage
            width: 34
            height: 30
            anchors {
                right: parent.right
                rightMargin: 70
                verticalCenter: parent.verticalCenter
            }
            source: "qrc:/Assets/wifi_full_icon.png"
        }

        Text {
            id: timeRec
            anchors {
                left: parent.left
                leftMargin: 5
                verticalCenter: parent.verticalCenter
            }
            font.pixelSize: 26
            color: "white"
            text: qsTr("22:22")
        }
    }


}
