import QtQuick 2.15
import QtQuick.Controls 2.15
import './Common'
import "../Component" as CItems

Image {
    id: myImage
    width: 700; height: 1100
    source: "qrc:/Assets/background.jpg"

    CItems.Header {
        width: 648
        anchors {
            horizontalCenter: parent.horizontalCenter
            top: parent.top
        }

    }

    CItems.Footer {
        width: 588
        height: 142
        isRadius: 50
        anchors {
            bottom: parent.bottom
            bottomMargin: 100
            horizontalCenter: parent.horizontalCenter
        }
    }

    GridView {
        id: grid
        model: homeController
        width: 600
        height: 900
        anchors.left: myImage.left
        anchors.leftMargin: 50
        anchors.fill: parent
        cellWidth: 150; cellHeight: 150
        boundsBehavior: Flickable.StopAtBounds
        delegate: Item {
            id: item
            width: grid.cellWidth
            height: grid.cellHeight
            AppIcon {
                id: img
                type: model.type
                anchors.centerIn: parent
                sourceIcon: model.image
            }
            Text {
                anchors.top: img.bottom
                anchors.horizontalCenter: parent.horizontalCenter
                color: '#fff'
                anchors.topMargin: model.type === "small" ? 5 : 10
                text: model.name
            }
        }
    }
}
