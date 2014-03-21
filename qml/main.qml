import QtQuick 2.2
import QtQuick.Controls 1.1 as Controls
import QMLBootstrap 1.0
import "Components"

Controls.ApplicationWindow {
    id: mainWindow
    title: qsTr("Hello QML Bootstrap!")

    width: 360*dp ; height: 360*dp

    Rectangle {
        anchors.fill: parent
        color: BS.scaffolding["body-bg"]

        //    FontAwesomeIcon {
        //        anchors.centerIn: parent
        //        faIcon: "fa-github"
        //    }

        Button {
            size: "large"
//            round: false
//            enabled: false
//            option: "primary"
            anchors.centerIn: parent
            text: "Hello QML Bootstrap!"
            onClicked: Qt.quit()
        }

        //    MouseArea {
        //        anchors.fill: parent
        //        onClicked: {
        //            Qt.quit();
        //        }
        //    }
    }
}
