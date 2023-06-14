import QtQuick 2.9
import QtQuick.Controls 2.15

Item {
    id: rootItem
    width: 50
    height: 50

    Component.onCompleted: {
        appFocus.append({"source": "qrc:/Assets/setting.png"})
        appFocus.append({"source": "qrc:/Assets/setting.png"})
        appFocus.append({"source": "qrc:/Assets/setting.png"})
    }

    Rectangle {
        id: footerRec
        width: parent.width
        height: parent.height
        color: "red"
        radius: 5

        ListView {
            anchors.fill: parent
            orientation: Qt.Horizontal
            layoutDirection: Qt.LeftToRight

            model: appFocus
            delegate: Item {
                width: 50
                height: 50
                Image {
                    anchors.fill: parent
                    source: model.source
                }
            }

        }
    }

    ListModel {
        id: appFocus
    }
}
