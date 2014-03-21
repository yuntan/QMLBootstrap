import QtQuick 2.2
import QtQuick.Controls 1.1 as Controls
import QMLBootstrap 1.0

Controls.ApplicationWindow {
    id: mainWindow
    title: qsTr("Hello QML Bootstrap!")

    width: 360*dp ; height: 360*dp

    FontAwesomeIcon {
        anchors.centerIn: parent
        faIcon: "fa-github"
    }

    MouseArea {
        anchors.fill: parent
        onClicked: {
            Qt.quit();
        }
    }
}
