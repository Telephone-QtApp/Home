import QtQuick 2.9
import QtQuick.Controls 2.15
import QtQuick.Layouts 1.15
import "../DataHMI/Res/resources.js" as RESOURCES

Item {
    id: rootItem
    property int isRadius: 5
    width: 50
    height: 50

    Component.onCompleted: {
        appFocus.append({"source": RESOURCES.SETTING_ICON})
        appFocus.append({"source": RESOURCES.FACETIME_ICON})
        appFocus.append({"source": RESOURCES.MESSAGE_ICON})
        appFocus.append({"source": RESOURCES.SAFARI_ICON})
    }

    Rectangle {
        id: footerRec
        width: parent.width
        height: parent.height
        color: "gray"
        radius: rootItem.isRadius

        RowLayout {
            id: appFooter
            anchors.centerIn: parent
            spacing: 30
            Repeater {
                model: appFocus
                delegate: Item {
                    width: 110
                    height: 110
                    Layout.fillWidth: true
                    Layout.minimumWidth: 110
                    Layout.minimumHeight: 110
                    Image {
                        anchors.fill: parent
                        source: model.source
                        MouseArea {
                            anchors.fill: parent
                            onClicked: {
                                console.log("ThaiVD")
                            }
                        }
                    }
                }
            }
        }
    }

    ListModel {
        id: appFocus
    }
}
