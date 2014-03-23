import QtQuick 2.2
import QtQuick.Controls 1.1 as Controls
import "Components"

Controls.ApplicationWindow {
    id: mainWindow
    title: qsTr("Hello QML Bootstrap!")

    width: 360*dp ; height: 360*dp

    Rectangle {
        anchors.fill: parent
        color: bs["body-bg"]

        //    FontAwesomeIcon {
        //        anchors.centerIn: parent
        //        faIcon: "fa-github"
        //    }

        Column {
            anchors.centerIn: parent
            spacing: 3*dp
            Button {
                size: "large"
                option: "info"
                faIcon: "fa-github"
                boldFont: true
                text: "Hello QML Bootstrap!"
                onClicked: Qt.quit()
                //            round: false
                //            enabled: false
            }

            Row {
                spacing: 3*dp
                Button {
                    //            faIcon: "fa-github"
//                    faIcon: "fa-trash-o"
                    size: "large"
                    option: "default"
                    text: "Default"
                }
                Button {
                    option: "primary"
                    text: "Primaty"
                }
                Button {
                    size: "small"
                    option: "success"
                    text: "Success"
                }
                Button {
                    size: "xsmall"
                    option: "info"
                    text: "Info"
                }
            }
            Input {
                width: 300*dp;
            }
        }

        //    MouseArea {
        //        anchors.fill: parent
        //        onClicked: {
        //            Qt.quit();
        //        }
        //    }
    }
}
