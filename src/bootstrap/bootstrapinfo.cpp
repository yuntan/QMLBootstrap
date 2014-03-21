#include <QtCore/qmath.h>
#include <QVariant>
#include <QColor>
#include "bootstrapinfo.h"

BootstrapInfo::BootstrapInfo(QObject *parent) :
    QObject(parent)
{
    // set utf8 codes to m_faIcons
    setupFaIcons();

    // Gray and brand colors for use across Bootstrap.
    setupColors();

    setupScaffolding();

    setupFontSize();

    // Define common padding and border radius sizes and more.
    // Values based on 14px text and 1.428 line-height (~20px to start).
    setupComponentValues();

    // Define text, background and border colors of button.
    setupButtonValues();
}

void BootstrapInfo::setupFaIcons()
{
    m_faIcons = new QQmlPropertyMap(this);

    m_faIcons->insert(QLatin1String("fa-glass"),        QVariant("\uf000"));
    m_faIcons->insert(QLatin1String("fa-music"),        QVariant("\uf001"));
    m_faIcons->insert(QLatin1String("fa-search"),       QVariant("\uf002"));
    m_faIcons->insert(QLatin1String("fa-envelope-o"),   QVariant("\uf003"));
    m_faIcons->insert(QLatin1String("fa-heart"),        QVariant("\uf004"));
    m_faIcons->insert(QLatin1String("fa-star"),         QVariant("\uf005"));
    m_faIcons->insert(QLatin1String("fa-star-o"),       QVariant("\uf006"));
    m_faIcons->insert(QLatin1String("fa-user"),         QVariant("\uf007"));
    m_faIcons->insert(QLatin1String("fa-film"),             QVariant("\uf008"));
    m_faIcons->insert(QLatin1String("fa-th-large"),          QVariant("\uf009"));
    m_faIcons->insert(QLatin1String("fa-th"), QVariant("\uf00a"));
    m_faIcons->insert(QLatin1String("fa-th-list"), QVariant("\uf00b"));
    m_faIcons->insert(QLatin1String("fa-check"), QVariant("\uf00c"));
    m_faIcons->insert(QLatin1String("fa-times"), QVariant("\uf00d"));
    m_faIcons->insert(QLatin1String("fa-search-plus"), QVariant("\uf00e"));
    m_faIcons->insert(QLatin1String("fa-search-minus"), QVariant("\uf010"));
    m_faIcons->insert(QLatin1String("fa-power-off"), QVariant("\uf011"));
    m_faIcons->insert(QLatin1String("fa-signal"), QVariant("\uf012"));
    m_faIcons->insert(QLatin1String("fa-cog"), QVariant("\uf013"));
    m_faIcons->insert(QLatin1String("fa-trash-o"), QVariant("\uf014"));
    m_faIcons->insert(QLatin1String("fa-home"), QVariant("\uf015"));
    m_faIcons->insert(QLatin1String("fa-file-o"), QVariant("\uf016"));
    m_faIcons->insert(QLatin1String("fa-clock-o"), QVariant("\uf017"));
    m_faIcons->insert(QLatin1String("fa-road"), QVariant("\uf018"));
    m_faIcons->insert(QLatin1String("fa-download"), QVariant("\uf019"));
    m_faIcons->insert(QLatin1String("fa-arrow-circle-o-down"), QVariant("\uf01a"));
    m_faIcons->insert(QLatin1String("fa-arrow-circle-o-up"),   QVariant("\uf01b"));
    m_faIcons->insert(QLatin1String("fa-inbox"), QVariant("\uf01c"));
    m_faIcons->insert(QLatin1String("fa-play-circle-o"), QVariant("\uf01d"));
    m_faIcons->insert(QLatin1String("fa-repeat"), QVariant("\uf01e"));
    m_faIcons->insert(QLatin1String("fa-refresh"), QVariant("\uf021"));
    m_faIcons->insert(QLatin1String("fa-list-alt"), QVariant("\uf022"));
    m_faIcons->insert(QLatin1String("fa-lock"), QVariant("\uf023"));
    m_faIcons->insert(QLatin1String("fa-flag"), QVariant("\uf024"));
    m_faIcons->insert(QLatin1String("fa-headphones"), QVariant("\uf025"));
    m_faIcons->insert(QLatin1String("fa-volume-off"), QVariant("\uf026"));
    m_faIcons->insert(QLatin1String("fa-volume-down"), QVariant("\uf027"));
    m_faIcons->insert(QLatin1String("fa-volume-up"), QVariant("\uf028"));
    m_faIcons->insert(QLatin1String("fa-qrcode"), QVariant("\uf029"));
    m_faIcons->insert(QLatin1String("fa-barcode"), QVariant("\uf02a"));
    m_faIcons->insert(QLatin1String("fa-tag"), QVariant("\uf02b"));
    m_faIcons->insert(QLatin1String("fa-tags"), QVariant("\uf02c"));
    m_faIcons->insert(QLatin1String("fa-book"), QVariant("\uf02d"));
    m_faIcons->insert(QLatin1String("fa-bookmark"), QVariant("\uf02e"));
    m_faIcons->insert(QLatin1String("fa-print"), QVariant("\uf02f"));
    m_faIcons->insert(QLatin1String("fa-camera"), QVariant("\uf030"));
    m_faIcons->insert(QLatin1String("fa-font"), QVariant("\uf031"));
    m_faIcons->insert(QLatin1String("fa-bold"), QVariant("\uf032"));
    m_faIcons->insert(QLatin1String("fa-italic"), QVariant("\uf033"));
    m_faIcons->insert(QLatin1String("fa-text-height"), QVariant("\uf034"));
    m_faIcons->insert(QLatin1String("fa-text-width"), QVariant("\uf035"));
    m_faIcons->insert(QLatin1String("fa-align-left"), QVariant("\uf036"));
    m_faIcons->insert(QLatin1String("fa-align-center"), QVariant("\uf037"));
    m_faIcons->insert(QLatin1String("fa-align-right"), QVariant("\uf038"));
    m_faIcons->insert(QLatin1String("fa-align-justify"), QVariant("\uf039"));
    m_faIcons->insert(QLatin1String("fa-list"), QVariant("\uf03a"));
    m_faIcons->insert(QLatin1String("fa-outdent"), QVariant("\uf03b"));
    m_faIcons->insert(QLatin1String("fa-indent"), QVariant("\uf03c"));
    m_faIcons->insert(QLatin1String("fa-video-camera"), QVariant("\uf03d"));
    m_faIcons->insert(QLatin1String("fa-picture-o"), QVariant("\uf03e"));
    m_faIcons->insert(QLatin1String("fa-pencil"), QVariant("\uf040"));
    m_faIcons->insert(QLatin1String("fa-map-marker"), QVariant("\uf041"));
    m_faIcons->insert(QLatin1String("fa-adjust"), QVariant("\uf042"));
    m_faIcons->insert(QLatin1String("fa-tint"), QVariant("\uf043"));
    m_faIcons->insert(QLatin1String("fa-pencil-square-o"), QVariant("\uf044"));
    m_faIcons->insert(QLatin1String("fa-share-square-o"), QVariant("\uf045"));
    m_faIcons->insert(QLatin1String("fa-check-square-o"), QVariant("\uf046"));
    m_faIcons->insert(QLatin1String("fa-move"), QVariant("\uf047"));
    m_faIcons->insert(QLatin1String("fa-step-backward"), QVariant("\uf048"));
    m_faIcons->insert(QLatin1String("fa-fast-backward"), QVariant("\uf049"));
    m_faIcons->insert(QLatin1String("fa-backward"), QVariant("\uf04a"));
    m_faIcons->insert(QLatin1String("fa-play"), QVariant("\uf04b"));
    m_faIcons->insert(QLatin1String("fa-pause"), QVariant("\uf04c"));
    m_faIcons->insert(QLatin1String("fa-stop"), QVariant("\uf04d"));
    m_faIcons->insert(QLatin1String("fa-forward"), QVariant("\uf04e"));
    m_faIcons->insert(QLatin1String("fa-fast-forward"), QVariant("\uf050"));
    m_faIcons->insert(QLatin1String("fa-step-forward"), QVariant("\uf051"));
    m_faIcons->insert(QLatin1String("fa-eject"), QVariant("\uf052"));
    m_faIcons->insert(QLatin1String("fa-chevron-left"), QVariant("\uf053"));
    m_faIcons->insert(QLatin1String("fa-chevron-right"), QVariant("\uf054"));
    m_faIcons->insert(QLatin1String("fa-plus-circle"), QVariant("\uf055"));
    m_faIcons->insert(QLatin1String("fa-minus-circle"), QVariant("\uf056"));
    m_faIcons->insert(QLatin1String("fa-times-circle"), QVariant("\uf057"));
    m_faIcons->insert(QLatin1String("fa-check-circle"), QVariant("\uf058"));
    m_faIcons->insert(QLatin1String("fa-question-circle"), QVariant("\uf059"));
    m_faIcons->insert(QLatin1String("fa-info-circle"), QVariant("\uf05a"));
    m_faIcons->insert(QLatin1String("fa-crosshairs"), QVariant("\uf05b"));
    m_faIcons->insert(QLatin1String("fa-times-circle-o"), QVariant("\uf05c"));
    m_faIcons->insert(QLatin1String("fa-check-circle-o"), QVariant("\uf05d"));
    m_faIcons->insert(QLatin1String("fa-ban"), QVariant("\uf05e"));
    m_faIcons->insert(QLatin1String("fa-arrow-left"), QVariant("\uf060"));
    m_faIcons->insert(QLatin1String("fa-arrow-right"), QVariant("\uf061"));
    m_faIcons->insert(QLatin1String("fa-arrow-up"), QVariant("\uf062"));
    m_faIcons->insert(QLatin1String("fa-arrow-down"), QVariant("\uf063"));
    m_faIcons->insert(QLatin1String("fa-share"), QVariant("\uf064"));
    m_faIcons->insert(QLatin1String("fa-resize-full"), QVariant("\uf065"));
    m_faIcons->insert(QLatin1String("fa-resize-small"), QVariant("\uf066"));
    m_faIcons->insert(QLatin1String("fa-plus"), QVariant("\uf067"));
    m_faIcons->insert(QLatin1String("fa-minus"), QVariant("\uf068"));
    m_faIcons->insert(QLatin1String("fa-asterisk"), QVariant("\uf069"));
    m_faIcons->insert(QLatin1String("fa-exclamation-circle"), QVariant("\uf06a"));
    m_faIcons->insert(QLatin1String("fa-gift"), QVariant("\uf06b"));
    m_faIcons->insert(QLatin1String("fa-leaf"), QVariant("\uf06c"));
    m_faIcons->insert(QLatin1String("fa-fire"), QVariant("\uf06d"));
    m_faIcons->insert(QLatin1String("fa-eye"), QVariant("\uf06e"));
    m_faIcons->insert(QLatin1String("fa-eye-slash"), QVariant("\uf070"));
    m_faIcons->insert(QLatin1String("fa-exclamation-triangle"), QVariant("\uf071"));
    m_faIcons->insert(QLatin1String("fa-plane"), QVariant("\uf072"));
    m_faIcons->insert(QLatin1String("fa-calendar"), QVariant("\uf073"));
    m_faIcons->insert(QLatin1String("fa-random"), QVariant("\uf074"));
    m_faIcons->insert(QLatin1String("fa-comment"), QVariant("\uf075"));
    m_faIcons->insert(QLatin1String("fa-magnet"), QVariant("\uf076"));
    m_faIcons->insert(QLatin1String("fa-chevron-up"), QVariant("\uf077"));
    m_faIcons->insert(QLatin1String("fa-chevron-down"), QVariant("\uf078"));
    m_faIcons->insert(QLatin1String("fa-retweet"), QVariant("\uf079"));
    m_faIcons->insert(QLatin1String("fa-shopping-cart"), QVariant("\uf07a"));
    m_faIcons->insert(QLatin1String("fa-folder"), QVariant("\uf07b"));
    m_faIcons->insert(QLatin1String("fa-folder-open"), QVariant("\uf07c"));
    m_faIcons->insert(QLatin1String("fa-resize-vertical"), QVariant("\uf07d"));
    m_faIcons->insert(QLatin1String("fa-resize-horizontal"), QVariant("\uf07e"));
    m_faIcons->insert(QLatin1String("fa-bar-chart-o"), QVariant("\uf080"));
    m_faIcons->insert(QLatin1String("fa-twitter-square"), QVariant("\uf081"));
    m_faIcons->insert(QLatin1String("fa-facebook-square"), QVariant("\uf082"));
    m_faIcons->insert(QLatin1String("fa-camera-retro"), QVariant("\uf083"));
    m_faIcons->insert(QLatin1String("fa-key"), QVariant("\uf084"));
    m_faIcons->insert(QLatin1String("fa-cogs"), QVariant("\uf085"));
    m_faIcons->insert(QLatin1String("fa-comments"), QVariant("\uf086"));
    m_faIcons->insert(QLatin1String("fa-thumbs-o-up"), QVariant("\uf087"));
    m_faIcons->insert(QLatin1String("fa-thumbs-o-down"), QVariant("\uf088"));
    m_faIcons->insert(QLatin1String("fa-star-half"), QVariant("\uf089"));
    m_faIcons->insert(QLatin1String("fa-heart-o"), QVariant("\uf08a"));
    m_faIcons->insert(QLatin1String("fa-sign-out"), QVariant("\uf08b"));
    m_faIcons->insert(QLatin1String("fa-linkedin-square"), QVariant("\uf08c"));
    m_faIcons->insert(QLatin1String("fa-thumb-tack"), QVariant("\uf08d"));
    m_faIcons->insert(QLatin1String("fa-external-link"), QVariant("\uf08e"));
    m_faIcons->insert(QLatin1String("fa-sign-in"), QVariant("\uf090"));
    m_faIcons->insert(QLatin1String("fa-trophy"), QVariant("\uf091"));
    m_faIcons->insert(QLatin1String("fa-github-square"), QVariant("\uf092"));
    m_faIcons->insert(QLatin1String("fa-upload"), QVariant("\uf093"));
    m_faIcons->insert(QLatin1String("fa-lemon-o"), QVariant("\uf094"));
    m_faIcons->insert(QLatin1String("fa-phone"), QVariant("\uf095"));
    m_faIcons->insert(QLatin1String("fa-square-o"), QVariant("\uf096"));
    m_faIcons->insert(QLatin1String("fa-bookmark-o"), QVariant("\uf097"));
    m_faIcons->insert(QLatin1String("fa-phone-square"), QVariant("\uf098"));
    m_faIcons->insert(QLatin1String("fa-twitter"), QVariant("\uf099"));
    m_faIcons->insert(QLatin1String("fa-facebook"), QVariant("\uf09a"));
    m_faIcons->insert(QLatin1String("fa-github"), QVariant("\uf09b"));
    m_faIcons->insert(QLatin1String("fa-unlock"), QVariant("\uf09c"));
    m_faIcons->insert(QLatin1String("fa-credit-card"), QVariant("\uf09d"));
    m_faIcons->insert(QLatin1String("fa-rss"), QVariant("\uf09e"));
    m_faIcons->insert(QLatin1String("fa-hdd"), QVariant("\uf0a0"));
    m_faIcons->insert(QLatin1String("fa-bullhorn"), QVariant("\uf0a1"));
    m_faIcons->insert(QLatin1String("fa-bell"), QVariant("\uf0f3"));
    m_faIcons->insert(QLatin1String("fa-certificate"), QVariant("\uf0a3"));
    m_faIcons->insert(QLatin1String("fa-hand-o-right"), QVariant("\uf0a4"));
    m_faIcons->insert(QLatin1String("fa-hand-o-left"), QVariant("\uf0a5"));
    m_faIcons->insert(QLatin1String("fa-hand-o-up"), QVariant("\uf0a6"));
    m_faIcons->insert(QLatin1String("fa-hand-o-down"), QVariant("\uf0a7"));
    m_faIcons->insert(QLatin1String("fa-arrow-circle-left"), QVariant("\uf0a8"));
    m_faIcons->insert(QLatin1String("fa-arrow-circle-right"), QVariant("\uf0a9"));
    m_faIcons->insert(QLatin1String("fa-arrow-circle-up"), QVariant("\uf0aa"));
    m_faIcons->insert(QLatin1String("fa-arrow-circle-down"), QVariant("\uf0ab"));
    m_faIcons->insert(QLatin1String("fa-globe"), QVariant("\uf0ac"));
    m_faIcons->insert(QLatin1String("fa-wrench"), QVariant("\uf0ad"));
    m_faIcons->insert(QLatin1String("fa-tasks"), QVariant("\uf0ae"));
    m_faIcons->insert(QLatin1String("fa-filter"), QVariant("\uf0b0"));
    m_faIcons->insert(QLatin1String("fa-briefcase"), QVariant("\uf0b1"));
    m_faIcons->insert(QLatin1String("fa-fullscreen"), QVariant("\uf0b2"));
    m_faIcons->insert(QLatin1String("fa-group"), QVariant("\uf0c0"));
    m_faIcons->insert(QLatin1String("fa-link"), QVariant("\uf0c1"));
    m_faIcons->insert(QLatin1String("fa-cloud"), QVariant("\uf0c2"));
    m_faIcons->insert(QLatin1String("fa-flask"), QVariant("\uf0c3"));
    m_faIcons->insert(QLatin1String("fa-scissors"), QVariant("\uf0c4"));
    m_faIcons->insert(QLatin1String("fa-files-o"), QVariant("\uf0c5"));
    m_faIcons->insert(QLatin1String("fa-paperclip"), QVariant("\uf0c6"));
    m_faIcons->insert(QLatin1String("fa-floppy-o"), QVariant("\uf0c7"));
    m_faIcons->insert(QLatin1String("fa-square"), QVariant("\uf0c8"));
    m_faIcons->insert(QLatin1String("fa-reorder"), QVariant("\uf0c9"));
    m_faIcons->insert(QLatin1String("fa-list-ul"), QVariant("\uf0ca"));
    m_faIcons->insert(QLatin1String("fa-list-ol"), QVariant("\uf0cb"));
    m_faIcons->insert(QLatin1String("fa-strikethrough"), QVariant("\uf0cc"));
    m_faIcons->insert(QLatin1String("fa-underline"), QVariant("\uf0cd"));
    m_faIcons->insert(QLatin1String("fa-table"), QVariant("\uf0ce"));
    m_faIcons->insert(QLatin1String("fa-magic"), QVariant("\uf0d0"));
    m_faIcons->insert(QLatin1String("fa-truck"), QVariant("\uf0d1"));
    m_faIcons->insert(QLatin1String("fa-pinterest"), QVariant("\uf0d2"));
    m_faIcons->insert(QLatin1String("fa-pinterest-square"), QVariant("\uf0d3"));
    m_faIcons->insert(QLatin1String("fa-google-plus-square"), QVariant("\uf0d4"));
    m_faIcons->insert(QLatin1String("fa-google-plus"), QVariant("\uf0d5"));
    m_faIcons->insert(QLatin1String("fa-money"), QVariant("\uf0d6"));
    m_faIcons->insert(QLatin1String("fa-caret-down"), QVariant("\uf0d7"));
    m_faIcons->insert(QLatin1String("fa-caret-up"), QVariant("\uf0d8"));
    m_faIcons->insert(QLatin1String("fa-caret-left"), QVariant("\uf0d9"));
    m_faIcons->insert(QLatin1String("fa-caret-right"), QVariant("\uf0da"));
    m_faIcons->insert(QLatin1String("fa-columns"), QVariant("\uf0db"));
    m_faIcons->insert(QLatin1String("fa-sort"), QVariant("\uf0dc"));
    m_faIcons->insert(QLatin1String("fa-sort-asc"), QVariant("\uf0dd"));
    m_faIcons->insert(QLatin1String("fa-sort-desc"), QVariant("\uf0de"));
    m_faIcons->insert(QLatin1String("fa-envelope"), QVariant("\uf0e0"));
    m_faIcons->insert(QLatin1String("fa-linkedin"), QVariant("\uf0e1"));
    m_faIcons->insert(QLatin1String("fa-undo"), QVariant("\uf0e2"));
    m_faIcons->insert(QLatin1String("fa-gavel"), QVariant("\uf0e3"));
    m_faIcons->insert(QLatin1String("fa-tachometer"), QVariant("\uf0e4"));
    m_faIcons->insert(QLatin1String("fa-comment-o"), QVariant("\uf0e5"));
    m_faIcons->insert(QLatin1String("fa-comments-o"), QVariant("\uf0e6"));
    m_faIcons->insert(QLatin1String("fa-bolt"), QVariant("\uf0e7"));
    m_faIcons->insert(QLatin1String("fa-sitemap"), QVariant("\uf0e8"));
    m_faIcons->insert(QLatin1String("fa-umbrella"), QVariant("\uf0e9"));
    m_faIcons->insert(QLatin1String("fa-clipboard"), QVariant("\uf0ea"));
    m_faIcons->insert(QLatin1String("fa-lightbulb-o"), QVariant("\uf0eb"));
    m_faIcons->insert(QLatin1String("fa-exchange"), QVariant("\uf0ec"));
    m_faIcons->insert(QLatin1String("fa-cloud-download"), QVariant("\uf0ed"));
    m_faIcons->insert(QLatin1String("fa-cloud-upload"), QVariant("\uf0ee"));
    m_faIcons->insert(QLatin1String("fa-user-md"), QVariant("\uf0f0"));
    m_faIcons->insert(QLatin1String("fa-stethoscope"), QVariant("\uf0f1"));
    m_faIcons->insert(QLatin1String("fa-suitcase"), QVariant("\uf0f2"));
    m_faIcons->insert(QLatin1String("fa-bell-o"), QVariant("\uf0a2"));
    m_faIcons->insert(QLatin1String("fa-coffee"), QVariant("\uf0f4"));
    m_faIcons->insert(QLatin1String("fa-cutlery"), QVariant("\uf0f5"));
    m_faIcons->insert(QLatin1String("fa-file-text-o"), QVariant("\uf0f6"));
    m_faIcons->insert(QLatin1String("fa-building"), QVariant("\uf0f7"));
    m_faIcons->insert(QLatin1String("fa-hospital"), QVariant("\uf0f8"));
    m_faIcons->insert(QLatin1String("fa-ambulance"), QVariant("\uf0f9"));
    m_faIcons->insert(QLatin1String("fa-medkit"), QVariant("\uf0fa"));
    m_faIcons->insert(QLatin1String("fa-fighter-jet"), QVariant("\uf0fb"));
    m_faIcons->insert(QLatin1String("fa-beer"), QVariant("\uf0fc"));
    m_faIcons->insert(QLatin1String("fa-h-square"), QVariant("\uf0fd"));
    m_faIcons->insert(QLatin1String("fa-plus-square"), QVariant("\uf0fe"));
    m_faIcons->insert(QLatin1String("fa-angle-double-left"), QVariant("\uf100"));
    m_faIcons->insert(QLatin1String("fa-angle-double-right"), QVariant("\uf101"));
    m_faIcons->insert(QLatin1String("fa-angle-double-up"), QVariant("\uf102"));
    m_faIcons->insert(QLatin1String("fa-angle-double-down"), QVariant("\uf103"));
    m_faIcons->insert(QLatin1String("fa-angle-left"), QVariant("\uf104"));
    m_faIcons->insert(QLatin1String("fa-angle-right"), QVariant("\uf105"));
    m_faIcons->insert(QLatin1String("fa-angle-up"), QVariant("\uf106"));
    m_faIcons->insert(QLatin1String("fa-angle-down"), QVariant("\uf107"));
    m_faIcons->insert(QLatin1String("fa-desktop"), QVariant("\uf108"));
    m_faIcons->insert(QLatin1String("fa-laptop"), QVariant("\uf109"));
    m_faIcons->insert(QLatin1String("fa-tablet"), QVariant("\uf10a"));
    m_faIcons->insert(QLatin1String("fa-mobile"), QVariant("\uf10b"));
    m_faIcons->insert(QLatin1String("fa-circle-o"), QVariant("\uf10c"));
    m_faIcons->insert(QLatin1String("fa-quote-left"), QVariant("\uf10d"));
    m_faIcons->insert(QLatin1String("fa-quote-right"), QVariant("\uf10e"));
    m_faIcons->insert(QLatin1String("fa-spinner"), QVariant("\uf110"));
    m_faIcons->insert(QLatin1String("fa-circle"), QVariant("\uf111"));
    m_faIcons->insert(QLatin1String("fa-reply"), QVariant("\uf112"));
    m_faIcons->insert(QLatin1String("fa-github-alt"), QVariant("\uf113"));
    m_faIcons->insert(QLatin1String("fa-folder-o"), QVariant("\uf114"));
    m_faIcons->insert(QLatin1String("fa-folder-open-o"), QVariant("\uf115"));
    m_faIcons->insert(QLatin1String("fa-expand-o"), QVariant("\uf116"));
    m_faIcons->insert(QLatin1String("fa-collapse-o"), QVariant("\uf117"));
    m_faIcons->insert(QLatin1String("fa-smile-o"), QVariant("\uf118"));
    m_faIcons->insert(QLatin1String("fa-frown-o"), QVariant("\uf119"));
    m_faIcons->insert(QLatin1String("fa-meh-o"), QVariant("\uf11a"));
    m_faIcons->insert(QLatin1String("fa-gamepad"), QVariant("\uf11b"));
    m_faIcons->insert(QLatin1String("fa-keyboard-o"), QVariant("\uf11c"));
    m_faIcons->insert(QLatin1String("fa-flag-o"), QVariant("\uf11d"));
    m_faIcons->insert(QLatin1String("fa-flag-checkered"), QVariant("\uf11e"));
    m_faIcons->insert(QLatin1String("fa-terminal"), QVariant("\uf120"));
    m_faIcons->insert(QLatin1String("fa-code"), QVariant("\uf121"));
    m_faIcons->insert(QLatin1String("fa-reply-all"), QVariant("\uf122"));
    m_faIcons->insert(QLatin1String("fa-mail-reply-all"), QVariant("\uf122"));
    m_faIcons->insert(QLatin1String("fa-star-half-o"), QVariant("\uf123"));
    m_faIcons->insert(QLatin1String("fa-location-arrow"), QVariant("\uf124"));
    m_faIcons->insert(QLatin1String("fa-crop"), QVariant("\uf125"));
    m_faIcons->insert(QLatin1String("fa-code-fork"), QVariant("\uf126"));
    m_faIcons->insert(QLatin1String("fa-chain-broken"), QVariant("\uf127"));
    m_faIcons->insert(QLatin1String("fa-question"), QVariant("\uf128"));
    m_faIcons->insert(QLatin1String("fa-info"), QVariant("\uf129"));
    m_faIcons->insert(QLatin1String("fa-exclamation"), QVariant("\uf12a"));
    m_faIcons->insert(QLatin1String("fa-superscript"), QVariant("\uf12b"));
    m_faIcons->insert(QLatin1String("fa-subscript"), QVariant("\uf12c"));
    m_faIcons->insert(QLatin1String("fa-eraser"), QVariant("\uf12d"));
    m_faIcons->insert(QLatin1String("fa-puzzle-piece"), QVariant("\uf12e"));
    m_faIcons->insert(QLatin1String("fa-microphone"), QVariant("\uf130"));
    m_faIcons->insert(QLatin1String("fa-microphone-slash"), QVariant("\uf131"));
    m_faIcons->insert(QLatin1String("fa-shield"), QVariant("\uf132"));
    m_faIcons->insert(QLatin1String("fa-calendar-o"), QVariant("\uf133"));
    m_faIcons->insert(QLatin1String("fa-fire-extinguisher"), QVariant("\uf134"));
    m_faIcons->insert(QLatin1String("fa-rocket"), QVariant("\uf135"));
    m_faIcons->insert(QLatin1String("fa-maxcdn"), QVariant("\uf136"));
    m_faIcons->insert(QLatin1String("fa-chevron-circle-left"), QVariant("\uf137"));
    m_faIcons->insert(QLatin1String("fa-chevron-circle-right"), QVariant("\uf138"));
    m_faIcons->insert(QLatin1String("fa-chevron-circle-up"), QVariant("\uf139"));
    m_faIcons->insert(QLatin1String("fa-chevron-circle-down"), QVariant("\uf13a"));
    m_faIcons->insert(QLatin1String("fa-html5"), QVariant("\uf13b"));
    m_faIcons->insert(QLatin1String("fa-css3"), QVariant("\uf13c"));
    m_faIcons->insert(QLatin1String("fa-anchor"), QVariant("\uf13d"));
    m_faIcons->insert(QLatin1String("fa-unlock-o"), QVariant("\uf13e"));
    m_faIcons->insert(QLatin1String("fa-bullseye"), QVariant("\uf140"));
    m_faIcons->insert(QLatin1String("fa-ellipsis-horizontal"), QVariant("\uf141"));
    m_faIcons->insert(QLatin1String("fa-ellipsis-vertical"), QVariant("\uf142"));
    m_faIcons->insert(QLatin1String("fa-rss-square"), QVariant("\uf143"));
    m_faIcons->insert(QLatin1String("fa-play-circle"), QVariant("\uf144"));
    m_faIcons->insert(QLatin1String("fa-ticket"), QVariant("\uf145"));
    m_faIcons->insert(QLatin1String("fa-minus-square"), QVariant("\uf146"));
    m_faIcons->insert(QLatin1String("fa-minus-square-o"), QVariant("\uf147"));
    m_faIcons->insert(QLatin1String("fa-level-up"), QVariant("\uf148"));
    m_faIcons->insert(QLatin1String("fa-level-down"), QVariant("\uf149"));
    m_faIcons->insert(QLatin1String("fa-check-square"), QVariant("\uf14a"));
    m_faIcons->insert(QLatin1String("fa-pencil-square"), QVariant("\uf14b"));
    m_faIcons->insert(QLatin1String("fa-external-link-square"), QVariant("\uf14c"));
    m_faIcons->insert(QLatin1String("fa-share-square"), QVariant("\uf14d"));
    m_faIcons->insert(QLatin1String("fa-compass"), QVariant("\uf14e"));
    m_faIcons->insert(QLatin1String("fa-caret-square-o-down"), QVariant("\uf150"));
    m_faIcons->insert(QLatin1String("fa-caret-square-o-up"), QVariant("\uf151"));
    m_faIcons->insert(QLatin1String("fa-caret-square-o-right"), QVariant("\uf152"));
    m_faIcons->insert(QLatin1String("fa-eur"), QVariant("\uf153"));
    m_faIcons->insert(QLatin1String("fa-gbp"), QVariant("\uf154"));
    m_faIcons->insert(QLatin1String("fa-usd"), QVariant("\uf155"));
    m_faIcons->insert(QLatin1String("fa-inr"), QVariant("\uf156"));
    m_faIcons->insert(QLatin1String("fa-jpy"), QVariant("\uf157"));
    m_faIcons->insert(QLatin1String("fa-rub"), QVariant("\uf158"));
    m_faIcons->insert(QLatin1String("fa-krw"), QVariant("\uf159"));
    m_faIcons->insert(QLatin1String("fa-btc"), QVariant("\uf15a"));
    m_faIcons->insert(QLatin1String("fa-file"), QVariant("\uf15b"));
    m_faIcons->insert(QLatin1String("fa-file-text"), QVariant("\uf15c"));
    m_faIcons->insert(QLatin1String("fa-sort-alpha-asc"), QVariant("\uf15d"));
    m_faIcons->insert(QLatin1String("fa-sort-alpha-desc"), QVariant("\uf15e"));
    m_faIcons->insert(QLatin1String("fa-sort-amount-asc"), QVariant("\uf160"));
    m_faIcons->insert(QLatin1String("fa-sort-amount-desc"), QVariant("\uf161"));
    m_faIcons->insert(QLatin1String("fa-sort-numeric-asc"), QVariant("\uf162"));
    m_faIcons->insert(QLatin1String("fa-sort-numeric-desc"), QVariant("\uf163"));
    m_faIcons->insert(QLatin1String("fa-thumbs-up"), QVariant("\uf164"));
    m_faIcons->insert(QLatin1String("fa-thumbs-down"), QVariant("\uf165"));
    m_faIcons->insert(QLatin1String("fa-youtube-square"), QVariant("\uf166"));
    m_faIcons->insert(QLatin1String("fa-youtube"), QVariant("\uf167"));
    m_faIcons->insert(QLatin1String("fa-xing"),                 QVariant("\uf168"));
    m_faIcons->insert(QLatin1String("fa-xing-square"),          QVariant("\uf169"));
    m_faIcons->insert(QLatin1String("fa-youtube-play"),         QVariant("\uf16a"));
    m_faIcons->insert(QLatin1String("fa-dropbox"),              QVariant("\uf16b"));
    m_faIcons->insert(QLatin1String("fa-stack-overflow"),       QVariant("\uf16c"));
    m_faIcons->insert(QLatin1String("fa-instagram"),            QVariant("\uf16d"));
    m_faIcons->insert(QLatin1String("fa-flickr"),               QVariant("\uf16e"));
    m_faIcons->insert(QLatin1String("fa-adn"),                  QVariant("\uf170"));
    m_faIcons->insert(QLatin1String("fa-bitbucket"),            QVariant("\uf171"));
    m_faIcons->insert(QLatin1String("fa-bitbucket-square"),     QVariant("\uf172"));
    m_faIcons->insert(QLatin1String("fa-tumblr"),               QVariant("\uf173"));
    m_faIcons->insert(QLatin1String("fa-tumblr-square"),        QVariant("\uf174"));
    m_faIcons->insert(QLatin1String("fa-long-arrow-down"),      QVariant("\uf175"));
    m_faIcons->insert(QLatin1String("fa-long-arrow-up"),        QVariant("\uf176"));
    m_faIcons->insert(QLatin1String("fa-long-arrow-left"),      QVariant("\uf177"));
    m_faIcons->insert(QLatin1String("fa-long-arrow-right"),     QVariant("\uf178"));
    m_faIcons->insert(QLatin1String("fa-apple"),                QVariant("\uf179"));
    m_faIcons->insert(QLatin1String("fa-windows"),              QVariant("\uf17a"));
    m_faIcons->insert(QLatin1String("fa-android"),              QVariant("\uf17b"));
    m_faIcons->insert(QLatin1String("fa-linux"),                QVariant("\uf17c"));
    m_faIcons->insert(QLatin1String("fa-dribbble"),             QVariant("\uf17d"));
    m_faIcons->insert(QLatin1String("fa-skype"),                QVariant("\uf17e"));
    m_faIcons->insert(QLatin1String("fa-foursquare"),           QVariant("\uf180"));
    m_faIcons->insert(QLatin1String("fa-trello"),               QVariant("\uf181"));
    m_faIcons->insert(QLatin1String("fa-female"),               QVariant("\uf182"));
    m_faIcons->insert(QLatin1String("fa-male"),                 QVariant("\uf183"));
    m_faIcons->insert(QLatin1String("fa-gittip"),               QVariant("\uf184"));
    m_faIcons->insert(QLatin1String("fa-sun-o"),                QVariant("\uf185"));
    m_faIcons->insert(QLatin1String("fa-moon-o"),               QVariant("\uf186"));
    m_faIcons->insert(QLatin1String("fa-archive"),              QVariant("\uf187"));
    m_faIcons->insert(QLatin1String("fa-bug"),                  QVariant("\uf188"));
    m_faIcons->insert(QLatin1String("fa-vk"),                   QVariant("\uf189"));
    m_faIcons->insert(QLatin1String("fa-weibo"),                QVariant("\uf18a"));
    m_faIcons->insert(QLatin1String("fa-renren"),               QVariant("\uf18b"));
    m_faIcons->insert(QLatin1String("fa-pagelines"),            QVariant("\uf18c"));
    m_faIcons->insert(QLatin1String("fa-stack-exchange"),       QVariant("\uf18d"));
    m_faIcons->insert(QLatin1String("fa-arrow-circle-o-right"), QVariant("\uf18e"));
    m_faIcons->insert(QLatin1String("fa-arrow-circle-o-left"),  QVariant("\uf190"));
    m_faIcons->insert(QLatin1String("fa-caret-square-o-left"),  QVariant("\uf191"));
    m_faIcons->insert(QLatin1String("fa-dot-circle-o"),         QVariant("\uf192"));
    m_faIcons->insert(QLatin1String("fa-wheelchair"),           QVariant("\uf193"));
    m_faIcons->insert(QLatin1String("fa-vimeo-square"),         QVariant("\uf194"));
    m_faIcons->insert(QLatin1String("fa-try"),                  QVariant("\uf195"));
    m_faIcons->insert(QLatin1String("fa-plus-square-o"),        QVariant("\uf196"));
}

void BootstrapInfo::setupColors()
{
    m_colors = new QQmlPropertyMap(this);

    QColor black = QColor("#000");
    m_colors->insert(QLatin1String("gray-darker"), QVariant(black.lighter(114)));
    m_colors->insert(QLatin1String("gray-dark"), QVariant(black.lighter(120)));
    m_colors->insert(QLatin1String("gray"), QVariant(black.lighter(134)));
    m_colors->insert(QLatin1String("gray-light"), QVariant(black.lighter(160)));
    m_colors->insert(QLatin1String("gray-lighter"), QVariant(black.lighter(194)));
    m_colors->insert(QLatin1String("brand-primary"), QVariant("#428bca"));
    m_colors->insert(QLatin1String("brand-success"), QVariant("#5cb85c"));
    m_colors->insert(QLatin1String("brand-info"), QVariant("#5bc0de"));
    m_colors->insert(QLatin1String("brand-warning"), QVariant("#f0ad4e"));
    m_colors->insert(QLatin1String("brand-danger"), QVariant("#d9534f"));
}

void BootstrapInfo::setupScaffolding()
{
    m_scaffolding = new QQmlPropertyMap(this);

    // Background color
    m_scaffolding->insert(QLatin1String("body-bg"), QVariant("#fff"));
    // Global text color
    m_scaffolding->insert(QLatin1String("text-color"), m_colors->value("gray-dark"));
    // Global textual link color
    m_scaffolding->insert(QLatin1String("link-color"), m_colors->value("brand-primary"));
    // Link hover color
    m_scaffolding->insert(QLatin1String("link-hover-color"),
                          QVariant(QColor(m_scaffolding->value("link-color").toString()).darker(115)));
}

void BootstrapInfo::setupFontSize()
{
    m_fontSize = new QQmlPropertyMap(this);

    const float base = 14.0f; // dp
    m_fontSize->insert(QLatin1String("base"), QVariant((int)base)); // 14dp
    m_fontSize->insert(QLatin1String("large"), QVariant(qCeil(base * 1.25f))); // 18dp
    m_fontSize->insert(QLatin1String("small"), QVariant(qCeil(base * 0.85f))); // 12dp
    m_fontSize->insert(QLatin1String("xsmall"), QVariant(qCeil(base * 0.85f))); // 12dp
}

void BootstrapInfo::setupComponentValues()
{
    m_lineHeight = new QQmlPropertyMap(this);
    m_padding = new QQmlPropertyMap(this);
    m_borderRadius = new QQmlPropertyMap(this);
    m_globalColors = new QQmlPropertyMap(this);

    const float base = 20.0f / 14.0f;
    // Unit-less `line-height` for use in components like buttons.
    m_lineHeight->insert(QLatin1String("base"), QVariant(base));
    // Computed "line-height" (`font-size` * `line-height`) for use with `margin`, `padding`, etc.
    m_lineHeight->insert(QLatin1String("computed"),
                         QVariant(qFloor(m_fontSize->value("base").toFloat() * base))); // 20dp
    // Values based on 14px text and 1.428 line-height (~20px to start).
    m_lineHeight->insert(QLatin1String("large"), QVariant(1.33f));
    m_lineHeight->insert(QLatin1String("small"), QVariant(1.5f));
    m_lineHeight->insert(QLatin1String("xsmall"), QVariant(1.5f));

    // dp
    m_padding->insert(QLatin1String("base-vrt"), QVariant(6));
    m_padding->insert(QLatin1String("base-hrz"), QVariant(12));
    m_padding->insert(QLatin1String("large-vrt"), QVariant(10));
    m_padding->insert(QLatin1String("large-hrz"), QVariant(16));
    m_padding->insert(QLatin1String("small-vrt"), QVariant(5));
    m_padding->insert(QLatin1String("small-hrz"), QVariant(10));
    m_padding->insert(QLatin1String("xsmall-vrt"), QVariant(1));
    m_padding->insert(QLatin1String("xsmall-hrz"), QVariant(5));

    // dp
    m_borderRadius->insert(QLatin1String("base"), QVariant(4));
    m_borderRadius->insert(QLatin1String("large"), QVariant(6));
    m_borderRadius->insert(QLatin1String("small"), QVariant(3));
    m_borderRadius->insert(QLatin1String("xsmall"), QVariant(3));

    // Global color for active items
    m_globalColors->insert(QLatin1String("active"), QVariant("#fff"));
    // Global background color for active items
    m_globalColors->insert(QLatin1String("active-bg"), m_colors->value("brand-primary"));
}

void BootstrapInfo::setupButtonValues()
{
    m_buttonColors = new QQmlPropertyMap(this);

    QString text = "#fff";
    m_buttonColors->insert(QLatin1String("default-text"), QVariant("#333"));
    m_buttonColors->insert(QLatin1String("default-bg"), QVariant("#fff"));
    m_buttonColors->insert(QLatin1String("default-border"), QVariant("#ccc"));
    m_buttonColors->insert(QLatin1String("primary-text"), QVariant(text));
    m_buttonColors->insert(QLatin1String("primary-bg"),
                           QVariant(m_colors->value("brand-primary")));
    m_buttonColors->insert(QLatin1String("primary-border"),
                           QVariant(QColor(m_buttonColors->value("primary-bg").toString()).darker(105)));
    m_buttonColors->insert(QLatin1String("success-text"), QVariant(text));
    m_buttonColors->insert(QLatin1String("success-bg"),
                           QVariant(m_colors->value("brand-success")));
    m_buttonColors->insert(QLatin1String("success-border"),
                           QVariant(QColor(m_buttonColors->value("success-bg").toString()).darker(105)));
    m_buttonColors->insert(QLatin1String("info-text"), QVariant(text));
    m_buttonColors->insert(QLatin1String("info-bg"),
                           QVariant(m_colors->value("brand-info")));
    m_buttonColors->insert(QLatin1String("info-border"),
                           QVariant(QColor(m_buttonColors->value("info-bg").toString()).darker(105)));
    m_buttonColors->insert(QLatin1String("warning-text"), QVariant(text));
    m_buttonColors->insert(QLatin1String("warning-bg"),
                           QVariant(m_colors->value("brand-warning")));
    m_buttonColors->insert(QLatin1String("warning-border"),
                           QVariant(QColor(m_buttonColors->value("warning-bg").toString()).darker(105)));
    m_buttonColors->insert(QLatin1String("danger-text"), QVariant(text));
    m_buttonColors->insert(QLatin1String("danger-bg"),
                           QVariant(m_colors->value("brand-danger")));
    m_buttonColors->insert(QLatin1String("danger-border"),
                           QVariant(QColor(m_buttonColors->value("danger-bg").toString()).darker(105)));
    m_buttonColors->insert(QLatin1String("link-disabled-color"), m_colors->value("gray-light"));
}
