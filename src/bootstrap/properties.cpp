#include <QtCore/qmath.h>
#include <QtCore/QVariant>
#include <QtGui/QColor>
#include <QtQml/QQmlPropertyMap>
#include "properties.h"

QQmlPropertyMap *m_faIcons;
QQmlPropertyMap *m_properties;

// Override or add property
void customize()
{

}

void setupFaIcons()
{
    m_faIcons = new QQmlPropertyMap();

    ADD_ICON(fa-glass, \uf000)
    ADD_ICON(fa-glass, \uf000)
    ADD_ICON(fa-music, \uf001)
    ADD_ICON(fa-search, \uf002)
    ADD_ICON(fa-envelope-o, \uf003)
    ADD_ICON(fa-heart, \uf004)
    ADD_ICON(fa-star, \uf005)
    ADD_ICON(fa-star-o, \uf006)
    ADD_ICON(fa-user, \uf007)
    ADD_ICON(fa-film, \uf008)
    ADD_ICON(fa-th-large, \uf009)
    ADD_ICON(fa-th, \uf00a)
    ADD_ICON(fa-th-list, \uf00b)
    ADD_ICON(fa-check, \uf00c)
    ADD_ICON(fa-times, \uf00d)
    ADD_ICON(fa-search-plus, \uf00e)
    ADD_ICON(fa-search-minus, \uf010)
    ADD_ICON(fa-power-off, \uf011)
    ADD_ICON(fa-signal, \uf012)
    ADD_ICON(fa-cog, \uf013)
    ADD_ICON(fa-trash-o, \uf014)
    ADD_ICON(fa-home, \uf015)
    ADD_ICON(fa-file-o, \uf016)
    ADD_ICON(fa-clock-o, \uf017)
    ADD_ICON(fa-road, \uf018)
    ADD_ICON(fa-download, \uf019)
    ADD_ICON(fa-arrow-circle-o-down, \uf01a)
    ADD_ICON(fa-arrow-circle-o-up, \uf01b)
    ADD_ICON(fa-inbox, \uf01c)
    ADD_ICON(fa-play-circle-o, \uf01d)
    ADD_ICON(fa-repeat, \uf01e)
    ADD_ICON(fa-refresh, \uf021)
    ADD_ICON(fa-list-alt, \uf022)
    ADD_ICON(fa-lock, \uf023)
    ADD_ICON(fa-flag, \uf024)
    ADD_ICON(fa-headphones, \uf025)
    ADD_ICON(fa-volume-off, \uf026)
    ADD_ICON(fa-volume-down, \uf027)
    ADD_ICON(fa-volume-up, \uf028)
    ADD_ICON(fa-qrcode, \uf029)
    ADD_ICON(fa-barcode, \uf02a)
    ADD_ICON(fa-tag, \uf02b)
    ADD_ICON(fa-tags, \uf02c)
    ADD_ICON(fa-book, \uf02d)
    ADD_ICON(fa-bookmark, \uf02e)
    ADD_ICON(fa-print, \uf02f)
    ADD_ICON(fa-camera, \uf030)
    ADD_ICON(fa-font, \uf031)
    ADD_ICON(fa-bold, \uf032)
    ADD_ICON(fa-italic, \uf033)
    ADD_ICON(fa-text-height, \uf034)
    ADD_ICON(fa-text-width, \uf035)
    ADD_ICON(fa-align-left, \uf036)
    ADD_ICON(fa-align-center, \uf037)
    ADD_ICON(fa-align-right, \uf038)
    ADD_ICON(fa-align-justify, \uf039)
    ADD_ICON(fa-list, \uf03a)
    ADD_ICON(fa-outdent, \uf03b)
    ADD_ICON(fa-indent, \uf03c)
    ADD_ICON(fa-video-camera, \uf03d)
    ADD_ICON(fa-picture-o, \uf03e)
    ADD_ICON(fa-pencil, \uf040)
    ADD_ICON(fa-map-marker, \uf041)
    ADD_ICON(fa-adjust, \uf042)
    ADD_ICON(fa-tint, \uf043)
    ADD_ICON(fa-pencil-square-o, \uf044)
    ADD_ICON(fa-share-square-o, \uf045)
    ADD_ICON(fa-check-square-o, \uf046)
    ADD_ICON(fa-move, \uf047)
    ADD_ICON(fa-step-backward, \uf048)
    ADD_ICON(fa-fast-backward, \uf049)
    ADD_ICON(fa-backward, \uf04a)
    ADD_ICON(fa-play, \uf04b)
    ADD_ICON(fa-pause, \uf04c)
    ADD_ICON(fa-stop, \uf04d)
    ADD_ICON(fa-forward, \uf04e)
    ADD_ICON(fa-fast-forward, \uf050)
    ADD_ICON(fa-step-forward, \uf051)
    ADD_ICON(fa-eject, \uf052)
    ADD_ICON(fa-chevron-left, \uf053)
    ADD_ICON(fa-chevron-right, \uf054)
    ADD_ICON(fa-plus-circle, \uf055)
    ADD_ICON(fa-minus-circle, \uf056)
    ADD_ICON(fa-times-circle, \uf057)
    ADD_ICON(fa-check-circle, \uf058)
    ADD_ICON(fa-question-circle, \uf059)
    ADD_ICON(fa-info-circle, \uf05a)
    ADD_ICON(fa-crosshairs, \uf05b)
    ADD_ICON(fa-times-circle-o, \uf05c)
    ADD_ICON(fa-check-circle-o, \uf05d)
    ADD_ICON(fa-ban, \uf05e)
    ADD_ICON(fa-arrow-left, \uf060)
    ADD_ICON(fa-arrow-right, \uf061)
    ADD_ICON(fa-arrow-up, \uf062)
    ADD_ICON(fa-arrow-down, \uf063)
    ADD_ICON(fa-share, \uf064)
    ADD_ICON(fa-resize-full, \uf065)
    ADD_ICON(fa-resize-small, \uf066)
    ADD_ICON(fa-plus, \uf067)
    ADD_ICON(fa-minus, \uf068)
    ADD_ICON(fa-asterisk, \uf069)
    ADD_ICON(fa-exclamation-circle, \uf06a)
    ADD_ICON(fa-gift, \uf06b)
    ADD_ICON(fa-leaf, \uf06c)
    ADD_ICON(fa-fire, \uf06d)
    ADD_ICON(fa-eye, \uf06e)
    ADD_ICON(fa-eye-slash, \uf070)
    ADD_ICON(fa-exclamation-triangle, \uf071)
    ADD_ICON(fa-plane, \uf072)
    ADD_ICON(fa-calendar, \uf073)
    ADD_ICON(fa-random, \uf074)
    ADD_ICON(fa-comment, \uf075)
    ADD_ICON(fa-magnet, \uf076)
    ADD_ICON(fa-chevron-up, \uf077)
    ADD_ICON(fa-chevron-down, \uf078)
    ADD_ICON(fa-retweet, \uf079)
    ADD_ICON(fa-shopping-cart, \uf07a)
    ADD_ICON(fa-folder, \uf07b)
    ADD_ICON(fa-folder-open, \uf07c)
    ADD_ICON(fa-resize-vertical, \uf07d)
    ADD_ICON(fa-resize-horizontal, \uf07e)
    ADD_ICON(fa-bar-chart-o, \uf080)
    ADD_ICON(fa-twitter-square, \uf081)
    ADD_ICON(fa-facebook-square, \uf082)
    ADD_ICON(fa-camera-retro, \uf083)
    ADD_ICON(fa-key, \uf084)
    ADD_ICON(fa-cogs, \uf085)
    ADD_ICON(fa-comments, \uf086)
    ADD_ICON(fa-thumbs-o-up, \uf087)
    ADD_ICON(fa-thumbs-o-down, \uf088)
    ADD_ICON(fa-star-half, \uf089)
    ADD_ICON(fa-heart-o, \uf08a)
    ADD_ICON(fa-sign-out, \uf08b)
    ADD_ICON(fa-linkedin-square, \uf08c)
    ADD_ICON(fa-thumb-tack, \uf08d)
    ADD_ICON(fa-external-link, \uf08e)
    ADD_ICON(fa-sign-in, \uf090)
    ADD_ICON(fa-trophy, \uf091)
    ADD_ICON(fa-github-square, \uf092)
    ADD_ICON(fa-upload, \uf093)
    ADD_ICON(fa-lemon-o, \uf094)
    ADD_ICON(fa-phone, \uf095)
    ADD_ICON(fa-square-o, \uf096)
    ADD_ICON(fa-bookmark-o, \uf097)
    ADD_ICON(fa-phone-square, \uf098)
    ADD_ICON(fa-twitter, \uf099)
    ADD_ICON(fa-facebook, \uf09a)
    ADD_ICON(fa-github, \uf09b)
    ADD_ICON(fa-unlock, \uf09c)
    ADD_ICON(fa-credit-card, \uf09d)
    ADD_ICON(fa-rss, \uf09e)
    ADD_ICON(fa-hdd, \uf0a0)
    ADD_ICON(fa-bullhorn, \uf0a1)
    ADD_ICON(fa-bell, \uf0f3)
    ADD_ICON(fa-certificate, \uf0a3)
    ADD_ICON(fa-hand-o-right, \uf0a4)
    ADD_ICON(fa-hand-o-left, \uf0a5)
    ADD_ICON(fa-hand-o-up, \uf0a6)
    ADD_ICON(fa-hand-o-down, \uf0a7)
    ADD_ICON(fa-arrow-circle-left, \uf0a8)
    ADD_ICON(fa-arrow-circle-right, \uf0a9)
    ADD_ICON(fa-arrow-circle-up, \uf0aa)
    ADD_ICON(fa-arrow-circle-down, \uf0ab)
    ADD_ICON(fa-globe, \uf0ac)
    ADD_ICON(fa-wrench, \uf0ad)
    ADD_ICON(fa-tasks, \uf0ae)
    ADD_ICON(fa-filter, \uf0b0)
    ADD_ICON(fa-briefcase, \uf0b1)
    ADD_ICON(fa-fullscreen, \uf0b2)
    ADD_ICON(fa-group, \uf0c0)
    ADD_ICON(fa-link, \uf0c1)
    ADD_ICON(fa-cloud, \uf0c2)
    ADD_ICON(fa-flask, \uf0c3)
    ADD_ICON(fa-scissors, \uf0c4)
    ADD_ICON(fa-files-o, \uf0c5)
    ADD_ICON(fa-paperclip, \uf0c6)
    ADD_ICON(fa-floppy-o, \uf0c7)
    ADD_ICON(fa-square, \uf0c8)
    ADD_ICON(fa-reorder, \uf0c9)
    ADD_ICON(fa-list-ul, \uf0ca)
    ADD_ICON(fa-list-ol, \uf0cb)
    ADD_ICON(fa-strikethrough, \uf0cc)
    ADD_ICON(fa-underline, \uf0cd)
    ADD_ICON(fa-table, \uf0ce)
    ADD_ICON(fa-magic, \uf0d0)
    ADD_ICON(fa-truck, \uf0d1)
    ADD_ICON(fa-pinterest, \uf0d2)
    ADD_ICON(fa-pinterest-square, \uf0d3)
    ADD_ICON(fa-google-plus-square, \uf0d4)
    ADD_ICON(fa-google-plus, \uf0d5)
    ADD_ICON(fa-money, \uf0d6)
    ADD_ICON(fa-caret-down, \uf0d7)
    ADD_ICON(fa-caret-up, \uf0d8)
    ADD_ICON(fa-caret-left, \uf0d9)
    ADD_ICON(fa-caret-right, \uf0da)
    ADD_ICON(fa-columns, \uf0db)
    ADD_ICON(fa-sort, \uf0dc)
    ADD_ICON(fa-sort-asc, \uf0dd)
    ADD_ICON(fa-sort-desc, \uf0de)
    ADD_ICON(fa-envelope, \uf0e0)
    ADD_ICON(fa-linkedin, \uf0e1)
    ADD_ICON(fa-undo, \uf0e2)
    ADD_ICON(fa-gavel, \uf0e3)
    ADD_ICON(fa-tachometer, \uf0e4)
    ADD_ICON(fa-comment-o, \uf0e5)
    ADD_ICON(fa-comments-o, \uf0e6)
    ADD_ICON(fa-bolt, \uf0e7)
    ADD_ICON(fa-sitemap, \uf0e8)
    ADD_ICON(fa-umbrella, \uf0e9)
    ADD_ICON(fa-clipboard, \uf0ea)
    ADD_ICON(fa-lightbulb-o, \uf0eb)
    ADD_ICON(fa-exchange, \uf0ec)
    ADD_ICON(fa-cloud-download, \uf0ed)
    ADD_ICON(fa-cloud-upload, \uf0ee)
    ADD_ICON(fa-user-md, \uf0f0)
    ADD_ICON(fa-stethoscope, \uf0f1)
    ADD_ICON(fa-suitcase, \uf0f2)
    ADD_ICON(fa-bell-o, \uf0a2)
    ADD_ICON(fa-coffee, \uf0f4)
    ADD_ICON(fa-cutlery, \uf0f5)
    ADD_ICON(fa-file-text-o, \uf0f6)
    ADD_ICON(fa-building, \uf0f7)
    ADD_ICON(fa-hospital, \uf0f8)
    ADD_ICON(fa-ambulance, \uf0f9)
    ADD_ICON(fa-medkit, \uf0fa)
    ADD_ICON(fa-fighter-jet, \uf0fb)
    ADD_ICON(fa-beer, \uf0fc)
    ADD_ICON(fa-h-square, \uf0fd)
    ADD_ICON(fa-plus-square, \uf0fe)
    ADD_ICON(fa-angle-double-left, \uf100)
    ADD_ICON(fa-angle-double-right, \uf101)
    ADD_ICON(fa-angle-double-up, \uf102)
    ADD_ICON(fa-angle-double-down, \uf103)
    ADD_ICON(fa-angle-left, \uf104)
    ADD_ICON(fa-angle-right, \uf105)
    ADD_ICON(fa-angle-up, \uf106)
    ADD_ICON(fa-angle-down, \uf107)
    ADD_ICON(fa-desktop, \uf108)
    ADD_ICON(fa-laptop, \uf109)
    ADD_ICON(fa-tablet, \uf10a)
    ADD_ICON(fa-mobile, \uf10b)
    ADD_ICON(fa-circle-o, \uf10c)
    ADD_ICON(fa-quote-left, \uf10d)
    ADD_ICON(fa-quote-right, \uf10e)
    ADD_ICON(fa-spinner, \uf110)
    ADD_ICON(fa-circle, \uf111)
    ADD_ICON(fa-reply, \uf112)
    ADD_ICON(fa-github-alt, \uf113)
    ADD_ICON(fa-folder-o, \uf114)
    ADD_ICON(fa-folder-open-o, \uf115)
    ADD_ICON(fa-expand-o, \uf116)
    ADD_ICON(fa-collapse-o, \uf117)
    ADD_ICON(fa-smile-o, \uf118)
    ADD_ICON(fa-frown-o, \uf119)
    ADD_ICON(fa-meh-o, \uf11a)
    ADD_ICON(fa-gamepad, \uf11b)
    ADD_ICON(fa-keyboard-o, \uf11c)
    ADD_ICON(fa-flag-o, \uf11d)
    ADD_ICON(fa-flag-checkered, \uf11e)
    ADD_ICON(fa-terminal, \uf120)
    ADD_ICON(fa-code, \uf121)
    ADD_ICON(fa-reply-all, \uf122)
    ADD_ICON(fa-mail-reply-all, \uf122)
    ADD_ICON(fa-star-half-o, \uf123)
    ADD_ICON(fa-location-arrow, \uf124)
    ADD_ICON(fa-crop, \uf125)
    ADD_ICON(fa-code-fork, \uf126)
    ADD_ICON(fa-chain-broken, \uf127)
    ADD_ICON(fa-question, \uf128)
    ADD_ICON(fa-info, \uf129)
    ADD_ICON(fa-exclamation, \uf12a)
    ADD_ICON(fa-superscript, \uf12b)
    ADD_ICON(fa-subscript, \uf12c)
    ADD_ICON(fa-eraser, \uf12d)
    ADD_ICON(fa-puzzle-piece, \uf12e)
    ADD_ICON(fa-microphone, \uf130)
    ADD_ICON(fa-microphone-slash, \uf131)
    ADD_ICON(fa-shield, \uf132)
    ADD_ICON(fa-calendar-o, \uf133)
    ADD_ICON(fa-fire-extinguisher, \uf134)
    ADD_ICON(fa-rocket, \uf135)
    ADD_ICON(fa-maxcdn, \uf136)
    ADD_ICON(fa-chevron-circle-left, \uf137)
    ADD_ICON(fa-chevron-circle-right, \uf138)
    ADD_ICON(fa-chevron-circle-up, \uf139)
    ADD_ICON(fa-chevron-circle-down, \uf13a)
    ADD_ICON(fa-html5, \uf13b)
    ADD_ICON(fa-css3, \uf13c)
    ADD_ICON(fa-anchor, \uf13d)
    ADD_ICON(fa-unlock-o, \uf13e)
    ADD_ICON(fa-bullseye, \uf140)
    ADD_ICON(fa-ellipsis-horizontal, \uf141)
    ADD_ICON(fa-ellipsis-vertical, \uf142)
    ADD_ICON(fa-rss-square, \uf143)
    ADD_ICON(fa-play-circle, \uf144)
    ADD_ICON(fa-ticket, \uf145)
    ADD_ICON(fa-minus-square, \uf146)
    ADD_ICON(fa-minus-square-o, \uf147)
    ADD_ICON(fa-level-up, \uf148)
    ADD_ICON(fa-level-down, \uf149)
    ADD_ICON(fa-check-square, \uf14a)
    ADD_ICON(fa-pencil-square, \uf14b)
    ADD_ICON(fa-external-link-square, \uf14c)
    ADD_ICON(fa-share-square, \uf14d)
    ADD_ICON(fa-compass, \uf14e)
    ADD_ICON(fa-caret-square-o-down, \uf150)
    ADD_ICON(fa-caret-square-o-up, \uf151)
    ADD_ICON(fa-caret-square-o-right, \uf152)
    ADD_ICON(fa-eur, \uf153)
    ADD_ICON(fa-gbp, \uf154)
    ADD_ICON(fa-usd, \uf155)
    ADD_ICON(fa-inr, \uf156)
    ADD_ICON(fa-jpy, \uf157)
    ADD_ICON(fa-rub, \uf158)
    ADD_ICON(fa-krw, \uf159)
    ADD_ICON(fa-btc, \uf15a)
    ADD_ICON(fa-file, \uf15b)
    ADD_ICON(fa-file-text, \uf15c)
    ADD_ICON(fa-sort-alpha-asc, \uf15d)
    ADD_ICON(fa-sort-alpha-desc, \uf15e)
    ADD_ICON(fa-sort-amount-asc, \uf160)
    ADD_ICON(fa-sort-amount-desc, \uf161)
    ADD_ICON(fa-sort-numeric-asc, \uf162)
    ADD_ICON(fa-sort-numeric-desc, \uf163)
    ADD_ICON(fa-thumbs-up, \uf164)
    ADD_ICON(fa-thumbs-down, \uf165)
    ADD_ICON(fa-youtube-square, \uf166)
    ADD_ICON(fa-youtube, \uf167)
    ADD_ICON(fa-xing, \uf168)
    ADD_ICON(fa-xing-square, \uf169)
    ADD_ICON(fa-youtube-play, \uf16a)
    ADD_ICON(fa-dropbox, \uf16b)
    ADD_ICON(fa-stack-overflow, \uf16c)
    ADD_ICON(fa-instagram, \uf16d)
    ADD_ICON(fa-flickr, \uf16e)
    ADD_ICON(fa-adn, \uf170)
    ADD_ICON(fa-bitbucket, \uf171)
    ADD_ICON(fa-bitbucket-square, \uf172)
    ADD_ICON(fa-tumblr, \uf173)
    ADD_ICON(fa-tumblr-square, \uf174)
    ADD_ICON(fa-long-arrow-down, \uf175)
    ADD_ICON(fa-long-arrow-up, \uf176)
    ADD_ICON(fa-long-arrow-left, \uf177)
    ADD_ICON(fa-long-arrow-right, \uf178)
    ADD_ICON(fa-apple, \uf179)
    ADD_ICON(fa-windows, \uf17a)
    ADD_ICON(fa-android, \uf17b)
    ADD_ICON(fa-linux, \uf17c)
    ADD_ICON(fa-dribbble, \uf17d)
    ADD_ICON(fa-skype, \uf17e)
    ADD_ICON(fa-foursquare, \uf180)
    ADD_ICON(fa-trello, \uf181)
    ADD_ICON(fa-female, \uf182)
    ADD_ICON(fa-male, \uf183)
    ADD_ICON(fa-gittip, \uf184)
    ADD_ICON(fa-sun-o, \uf185)
    ADD_ICON(fa-moon-o, \uf186)
    ADD_ICON(fa-archive, \uf187)
    ADD_ICON(fa-bug, \uf188)
    ADD_ICON(fa-vk, \uf189)
    ADD_ICON(fa-weibo, \uf18a)
    ADD_ICON(fa-renren, \uf18b)
    ADD_ICON(fa-pagelines, \uf18c)
    ADD_ICON(fa-stack-exchange, \uf18d)
    ADD_ICON(fa-arrow-circle-o-right, \uf18e)
    ADD_ICON(fa-arrow-circle-o-left, \uf190)
    ADD_ICON(fa-caret-square-o-left, \uf191)
    ADD_ICON(fa-dot-circle-o, \uf192)
    ADD_ICON(fa-wheelchair, \uf193)
    ADD_ICON(fa-vimeo-square, \uf194)
    ADD_ICON(fa-try, \uf195)
    ADD_ICON(fa-plus-square-o, \uf196)
}

QColor lighten(QColor color, uint amount)
{

    int lightness = color.lightness() + 255 * amount / 100;
    if(lightness > 255) { lightness = 255; }
    return QColor::fromHsl(color.hue(), color.saturation(), lightness);
}

QColor darken(QColor color, uint amount)
{
    int lightness = color.lightness() - 255 * amount / 100;
    if(lightness < 0) { lightness = 0; }
    return QColor::fromHsl(color.hue(), color.saturation(), lightness);
}

void setupProperties()
{
    m_properties = new QQmlPropertyMap();

    // == Colors ==
    // Gray and brand colors
    auto black = QColor("#000");
    SET_PROPERTY(gray-darker, lighten(black, 14)) // #222
    SET_PROPERTY(gray-dark, lighten(black, 20)) // #333
    SET_PROPERTY(gray, lighten(black, 34)) // #555
    SET_PROPERTY(gray-light, lighten(black, 60)) // #999
    SET_PROPERTY(gray-lighter, lighten(black, 94)) // #eee

    SET_PROPERTY(brand-primary, "#428bca")
    SET_PROPERTY(brand-success, "#5cb85c")
    SET_PROPERTY(brand-info, "#5bc0de")
    SET_PROPERTY(brand-warning, "#f0ad4e")
    SET_PROPERTY(brand-danger, "#d9534f")


    // == Scaffolding ==
    // Settings for some of the most global styles.
    SET_PROPERTY(body-bg, "#fff") // Background color
    SET_PROPERTY_BY_ID(text-color, gray-dark) // Global text color
    SET_PROPERTY_BY_ID(link-color, brand-primary) // Global textual link color
    SET_PROPERTY(link-hover-color, darken(GET_COLOR(link-color), 15)) // Link hover color


    // == Typography ==
    // Font, line-height, and color for body text, headings, and more.
    /* not used
    SET_PROPERTY(font-family-sans-serif, "\"Helvetica Neue\", Helvetica, Arial, sans-serif")
    SET_PROPERTY(font-family-serif, "Georgia, \"Times New Roman\", Times, serif")
    // Default monospace fonts for `<code>`, `<kbd>`, and `<pre>`.
    SET_PROPERTY(font-family-monospace, "Menlo, Monaco, Consolas, \"Courier New\", monospace")
    SET_PROPERTY_BY_ID(font-family-base, font-family-sans-serif)
     */

    SET_PROPERTY(font-size-base, 14) // dp
    SET_PROPERTY(font-size-large, qCeil(GET_VALUE(font-size-base).toFloat() * 1.25f)) // 18dp
    SET_PROPERTY(font-size-small, qCeil(GET_VALUE(font-size-base).toFloat() * 0.85f)) // 12dp
    SET_PROPERTY(font-size-xsmall, qCeil(GET_VALUE(font-size-base).toFloat() * 0.85f)) // 12dp

    SET_PROPERTY(font-size-h1, qFloor(GET_VALUE(font-size-base).toFloat() * 2.6f)) // 36dp
    SET_PROPERTY(font-size-h2, qFloor(GET_VALUE(font-size-base).toFloat() * 2.15f)) // 30dp
    SET_PROPERTY(font-size-h3, qCeil(GET_VALUE(font-size-base).toFloat() * 1.7f)) // 24dp
    SET_PROPERTY(font-size-h4, qCeil(GET_VALUE(font-size-base).toFloat() * 1.25f)) // 18dp
    SET_PROPERTY_BY_ID(font-size-h5, font-size-base)
    SET_PROPERTY(font-size-h6, qCeil(GET_VALUE(font-size-base).toFloat() * 0.85f)) // 12dp

    /* not used
    // Unit-less `line-height` for use in components like buttons.
    SET_PROPERTY(line-height-base, 1.428571429f) // 20/14
    // Computed "line-height" (`font-size` * `line-height`) for use with `margin`, `padding`, etc.
    SET_PROPERTY(line-height-computed, qFloor((font-size-base * line-height-base))) // ~20px

    // By default, this inherits from the `<body>`.
    SET_PROPERTY(headings-font-family, inherit)
    SET_PROPERTY(headings-font-weight, 500)
    SET_PROPERTY(headings-line-height, 1.1)
    SET_PROPERTY(headings-color, inherit)
     */


    /* needless
    // == Iconography ==
    // Specify custom locations of the include Glyphicons icon font. Useful for those including Bootstrap via Bower.
    SET_PROPERTY(icon-font-path, "../fonts/")
    SET_PROPERTY(icon-font-name, "glyphicons-halflings-regular")
    SET_PROPERTY(icon-font-svg-id, "glyphicons_halflingsregular")
     */


    // == Components ==
    // Define common padding and border radius sizes and more.
    // Values based on 14px text.
    SET_PROPERTY(padding-base-vertical, 6)
    SET_PROPERTY(padding-base-horizontal, 12)

    SET_PROPERTY(padding-large-vertical, 10)
    SET_PROPERTY(padding-large-horizontal, 16)

    SET_PROPERTY(padding-small-vertical, 5)
    SET_PROPERTY(padding-small-horizontal, 10)

    SET_PROPERTY(padding-xsmall-vertical, 1)
    SET_PROPERTY(padding-xsmall-horizontal, 5)

//    SET_PROPERTY(line-height-large, 1.33)
//    SET_PROPERTY(line-height-small, 1.5)

    SET_PROPERTY(border-radius-base, 4)
    SET_PROPERTY(border-radius-large, 6)
    SET_PROPERTY(border-radius-small, 3)
    SET_PROPERTY(border-radius-xsmall, 3)

    // Global color for active items (e.g., navs or dropdowns).
    SET_PROPERTY(component-active-color, "#fff")
    // Global background color for active items (e.g., navs or dropdowns).
    SET_PROPERTY_BY_ID(component-active-bg, brand-primary)

    // Width of the `border` for generating carets that indicator dropdowns.
    SET_PROPERTY(caret-width-base, 4)
    SET_PROPERTY(caret-width-small, 4)
    SET_PROPERTY(caret-width-xsmall, 4)
    // Carets increase slightly in size for larger components.
    SET_PROPERTY(caret-width-large, 5)


    /*
    // == Tables ==
    // Customizes the table component with basic values, each used across all table variations.

    SET_PROPERTY(table-cell-padding, 8)
    // Padding for cells in `.table-condensed`.
    SET_PROPERTY(table-condensed-cell-padding, 5)

    // Default background color used for all tables.
    SET_PROPERTY(table-bg, transparent)
    // Background color used for `.table-striped`.
    SET_PROPERTY(table-bg-accent, #f9f9f9)
    // Background color used for `.table-hover`.
    SET_PROPERTY(table-bg-hover, #f5f5f5)
    SET_PROPERTY(table-bg-active, table-bg-hover)

    // Border color for table and cell borders.
    SET_PROPERTY(table-border-color, #ddd)
     */

    // == Buttons ==
    // For each of buttons, define text, background and border color.
//    SET_PROPERTY(btn-font-weight, normal)

    SET_PROPERTY(btn-default-color, "#333")
    SET_PROPERTY(btn-default-bg, "#fff")
    SET_PROPERTY(btn-default-border, "#ccc")

    SET_PROPERTY(btn-primary-color, "#fff")
    SET_PROPERTY_BY_ID(btn-primary-bg, brand-primary)
    SET_PROPERTY(btn-primary-border, darken(GET_COLOR(btn-primary-bg), 5))

    SET_PROPERTY(btn-success-color, "#fff")
    SET_PROPERTY_BY_ID(btn-success-bg, brand-success)
    SET_PROPERTY(btn-success-border, darken(GET_COLOR(btn-success-bg), 5))

    SET_PROPERTY(btn-info-color, "#fff")
    SET_PROPERTY_BY_ID(btn-info-bg, brand-info)
    SET_PROPERTY(btn-info-border, darken(GET_COLOR(btn-info-bg), 5))

    SET_PROPERTY(btn-warning-color, "#fff")
    SET_PROPERTY_BY_ID(btn-warning-bg, brand-warning)
    SET_PROPERTY(btn-warning-border, darken(GET_COLOR(btn-warning-bg), 5))

    SET_PROPERTY(btn-danger-color, "#fff")
    SET_PROPERTY_BY_ID(btn-danger-bg, brand-danger)
    SET_PROPERTY(btn-danger-border, darken(GET_COLOR(btn-danger-bg), 5))

    SET_PROPERTY_BY_ID(btn-link-disabled-color, gray-light)


    // == Forms ==
    SET_PROPERTY(input-bg, "#fff") // input background color
    SET_PROPERTY_BY_ID(input-bg-disabled, gray-lighter) // input disabled background color
    SET_PROPERTY_BY_ID(input-color, gray) // Text color for inputs
    SET_PROPERTY(input-border, "#ccc") // input border color
    SET_PROPERTY_BY_ID(input-border-radius, border-radius-base) // input border radius
    SET_PROPERTY(input-border-focus, "#66afe9") // Border color for inputs on focus

    SET_PROPERTY_BY_ID(input-color-placeholder, gray-light) // Placeholder text color

    /* needless
    // Default form-control height
    SET_PROPERTY(input-height-base, (line-height-computed + (padding-base-vertical * 2) + 2))
    // Large form-control height
    SET_PROPERTY(input-height-large, (qCeil(font-size-large * line-height-large) + (padding-large-vertical * 2) + 2))
    // Small form-control height
    SET_PROPERTY(input-height-small, (qFloor(font-size-small * line-height-small) + (padding-small-vertical * 2) + 2))
     */

    SET_PROPERTY_BY_ID(legend-color, gray-dark)
    SET_PROPERTY(legend-border-color, "#e5e5e5")

    // Background color for textual input addons
    SET_PROPERTY_BY_ID(input-group-addon-bg, gray-lighter)
    // Border color for textual input addons
    SET_PROPERTY_BY_ID(input-group-addon-border-color, input-border)


    // == Dropdowns ==
    // Dropdown menu container and contents.
    SET_PROPERTY(dropdown-bg, "#fff") // Background for the dropdown menu.
    SET_PROPERTY(dropdown-border, QColor(0, 0, 0, 38)) // Dropdown menu `border-color`.
//    SET_PROPERTY(dropdown-fallback-border, "#ccc") // Dropdown menu `border-color` for IE8.
    SET_PROPERTY(dropdown-divider-bg, "#e5e5e5") // Divider color for between dropdown items.

    SET_PROPERTY_BY_ID(dropdown-link-color, gray-dark) // Dropdown link text color.
    // Hover color for dropdown links.
    SET_PROPERTY(dropdown-link-hover-color, darken(GET_COLOR(gray-dark), 5))
    SET_PROPERTY(dropdown-link-hover-bg, "#f5f5f5") // Hover background for dropdown links.

    // Active dropdown menu item text color.
    SET_PROPERTY_BY_ID(dropdown-link-active-color, component-active-color)
    // Active dropdown menu item background color.
    SET_PROPERTY_BY_ID(dropdown-link-active-bg, component-active-bg)

    // Disabled dropdown menu item background color.
    SET_PROPERTY_BY_ID(dropdown-link-disabled-color, gray-light)

    // Text color for headers within dropdown menus.
    SET_PROPERTY_BY_ID(dropdown-header-color, gray-light)

    // Note, Deprecated dropdown-caret-color as of v3.1.0
    SET_PROPERTY(dropdown-caret-color, "#000")


    /*
    //-- Z-index master list
    //
    // Warning, Avoid customizing these values. They're used for a bird's eye view
    // of components dependent on the z-axis and are designed to all work together.
    //
    // Note, These variables are not generated into the Customizer.

    SET_PROPERTY(zindex-navbar, 1000)
    SET_PROPERTY(zindex-dropdown, 1000)
    SET_PROPERTY(zindex-popover, 1010)
    SET_PROPERTY(zindex-tooltip, 1030)
    SET_PROPERTY(zindex-navbar-fixed, 1030)
    SET_PROPERTY(zindex-modal-background, 1040)
    SET_PROPERTY(zindex-modal, 1050)


    //== Media queries breakpoints
    //
    // Define the breakpoints at which your layout will change, adapting to different screen sizes.

    // Extra small screen / phone
    // Note, Deprecated screen-xs and screen-phone as of v3.0.1
    SET_PROPERTY(screen-xs, 480px)
    SET_PROPERTY(screen-xs-min, screen-xs)
    SET_PROPERTY(screen-phone, screen-xs-min)

    // Small screen / tablet
    // Note, Deprecated screen-sm and screen-tablet as of v3.0.1
    SET_PROPERTY(screen-sm, 768px)
    SET_PROPERTY(screen-sm-min, screen-sm)
    SET_PROPERTY(screen-tablet, screen-sm-min)

    // Medium screen / desktop
    // Note, Deprecated screen-md and screen-desktop as of v3.0.1
    SET_PROPERTY(screen-md, 992px)
    SET_PROPERTY(screen-md-min, screen-md)
    SET_PROPERTY(screen-desktop, screen-md-min)

    // Large screen / wide desktop
    // Note, Deprecated screen-lg and screen-lg-desktop as of v3.0.1
    SET_PROPERTY(screen-lg, 1200px)
    SET_PROPERTY(screen-lg-min, screen-lg)
    SET_PROPERTY(screen-lg-desktop, screen-lg-min)

    // So media queries don't overlap when required, provide a maximum
    SET_PROPERTY(screen-xs-max, (screen-sm-min - 1))
    SET_PROPERTY(screen-sm-max, (screen-md-min - 1))
    SET_PROPERTY(screen-md-max, (screen-lg-min - 1))


    //== Grid system
    //
    // Define your custom responsive grid.

    // Number of columns in the grid.
    SET_PROPERTY(grid-columns, 12)
    // Padding between columns. Gets divided in half for the left and right.
    SET_PROPERTY(grid-gutter-width, 30px)
    // Navbar collapse
    // Point at which the navbar becomes uncollapsed.
    SET_PROPERTY(grid-float-breakpoint, screen-sm-min)
    // Point at which the navbar begins collapsing.
    SET_PROPERTY(grid-float-breakpoint-max, (grid-float-breakpoint - 1))


    //== Container sizes
    //
    // Define the maximum width of `.container` for different screen sizes.

    // Small screen / tablet
    SET_PROPERTY(container-tablet, ((720px + grid-gutter-width)))
    // For `screen-sm-min` and up.
    SET_PROPERTY(container-sm, container-tablet)

    // Medium screen / desktop
    SET_PROPERTY(container-desktop, ((940px + grid-gutter-width)))
    // For `screen-md-min` and up.
    SET_PROPERTY(container-md, container-desktop)

    // Large screen / wide desktop
    SET_PROPERTY(container-large-desktop, ((1140px + grid-gutter-width)))
    // For `screen-lg-min` and up.
    SET_PROPERTY(container-lg, container-large-desktop)


    //== Navbar
    //
    //

    // Basics of a navbar
    SET_PROPERTY(navbar-height, 50px)
    SET_PROPERTY(navbar-margin-bottom, line-height-computed)
    SET_PROPERTY(navbar-border-radius, border-radius-base)
    SET_PROPERTY(navbar-padding-horizontal, qFloor((grid-gutter-width / 2)))
    SET_PROPERTY(navbar-padding-vertical, ((navbar-height - line-height-computed) / 2))
    SET_PROPERTY(navbar-collapse-max-height, 340px)

    SET_PROPERTY(navbar-default-color, #777)
    SET_PROPERTY(navbar-default-bg, #f8f8f8)
    SET_PROPERTY(navbar-default-border, darken(navbar-default-bg, 6.5%))

    // Navbar links
    SET_PROPERTY(navbar-default-link-color, #777)
    SET_PROPERTY(navbar-default-link-hover-color, #333)
    SET_PROPERTY(navbar-default-link-hover-bg, transparent)
    SET_PROPERTY(navbar-default-link-active-color, #555)
    SET_PROPERTY(navbar-default-link-active-bg, darken(navbar-default-bg, 6.5%))
    SET_PROPERTY(navbar-default-link-disabled-color, #ccc)
    SET_PROPERTY(navbar-default-link-disabled-bg, transparent)

    // Navbar brand label
    SET_PROPERTY(navbar-default-brand-color, navbar-default-link-color)
    SET_PROPERTY(navbar-default-brand-hover-color, darken(navbar-default-brand-color, 10%))
    SET_PROPERTY(navbar-default-brand-hover-bg, transparent)

    // Navbar toggle
    SET_PROPERTY(navbar-default-toggle-hover-bg, #ddd)
    SET_PROPERTY(navbar-default-toggle-icon-bar-bg, #888)
    SET_PROPERTY(navbar-default-toggle-border-color, #ddd)


    // Inverted navbar
    // Reset inverted navbar basics
    SET_PROPERTY(navbar-inverse-color, gray-light)
    SET_PROPERTY(navbar-inverse-bg, #222)
    SET_PROPERTY(navbar-inverse-border, darken(navbar-inverse-bg, 10%))

    // Inverted navbar links
    SET_PROPERTY(navbar-inverse-link-color, gray-light)
    SET_PROPERTY(navbar-inverse-link-hover-color, #fff)
    SET_PROPERTY(navbar-inverse-link-hover-bg, transparent)
    SET_PROPERTY(navbar-inverse-link-active-color, navbar-inverse-link-hover-color)
    SET_PROPERTY(navbar-inverse-link-active-bg, darken(navbar-inverse-bg, 10%))
    SET_PROPERTY(navbar-inverse-link-disabled-color, #444)
    SET_PROPERTY(navbar-inverse-link-disabled-bg, transparent)

    // Inverted navbar brand label
    SET_PROPERTY(navbar-inverse-brand-color, navbar-inverse-link-color)
    SET_PROPERTY(navbar-inverse-brand-hover-color, #fff)
    SET_PROPERTY(navbar-inverse-brand-hover-bg, transparent)

    // Inverted navbar toggle
    SET_PROPERTY(navbar-inverse-toggle-hover-bg, #333)
    SET_PROPERTY(navbar-inverse-toggle-icon-bar-bg, #fff)
    SET_PROPERTY(navbar-inverse-toggle-border-color, #333)


    //== Navs
    //
    //

    //=== Shared nav styles
    SET_PROPERTY(nav-link-padding, 10px 15px)
    SET_PROPERTY(nav-link-hover-bg, gray-lighter)

    SET_PROPERTY(nav-disabled-link-color, gray-light)
    SET_PROPERTY(nav-disabled-link-hover-color, gray-light)

    SET_PROPERTY(nav-open-link-hover-color, #fff)

    //== Tabs
    SET_PROPERTY(nav-tabs-border-color, #ddd)

    SET_PROPERTY(nav-tabs-link-hover-border-color, gray-lighter)

    SET_PROPERTY(nav-tabs-active-link-hover-bg, body-bg)
    SET_PROPERTY(nav-tabs-active-link-hover-color, gray)
    SET_PROPERTY(nav-tabs-active-link-hover-border-color, #ddd)

    SET_PROPERTY(nav-tabs-justified-link-border-color, #ddd)
    SET_PROPERTY(nav-tabs-justified-active-link-border-color, body-bg)

    //== Pills
    SET_PROPERTY(nav-pills-border-radius, border-radius-base)
    SET_PROPERTY(nav-pills-active-link-hover-bg, component-active-bg)
    SET_PROPERTY(nav-pills-active-link-hover-color, component-active-color)


    //== Pagination
    //
    //

    SET_PROPERTY(pagination-color, link-color)
    SET_PROPERTY(pagination-bg, #fff)
    SET_PROPERTY(pagination-border, #ddd)

    SET_PROPERTY(pagination-hover-color, link-hover-color)
    SET_PROPERTY(pagination-hover-bg, gray-lighter)
    SET_PROPERTY(pagination-hover-border, #ddd)

    SET_PROPERTY(pagination-active-color, #fff)
    SET_PROPERTY(pagination-active-bg, brand-primary)
    SET_PROPERTY(pagination-active-border, brand-primary)

    SET_PROPERTY(pagination-disabled-color, gray-light)
    SET_PROPERTY(pagination-disabled-bg, #fff)
    SET_PROPERTY(pagination-disabled-border, #ddd)


    //== Pager
    //
    //

    SET_PROPERTY(pager-bg, pagination-bg)
    SET_PROPERTY(pager-border, pagination-border)
    SET_PROPERTY(pager-border-radius, 15px)

    SET_PROPERTY(pager-hover-bg, pagination-hover-bg)

    SET_PROPERTY(pager-active-bg, pagination-active-bg)
    SET_PROPERTY(pager-active-color, pagination-active-color)

    SET_PROPERTY(pager-disabled-color, pagination-disabled-color)


    //== Jumbotron
    //
    //

    SET_PROPERTY(jumbotron-padding, 30px)
    SET_PROPERTY(jumbotron-color, inherit)
    SET_PROPERTY(jumbotron-bg, gray-lighter)
    SET_PROPERTY(jumbotron-heading-color, inherit)
    SET_PROPERTY(jumbotron-font-size, qCeil((font-size-base * 1.5)))


    //== Form states and alerts
    //
    // Define colors for form feedback states and, by default, alerts.

    SET_PROPERTY(state-success-text, #3c763d)
    SET_PROPERTY(state-success-bg, #dff0d8)
    SET_PROPERTY(state-success-border, darken(spin(state-success-bg, -10), 5%))

    SET_PROPERTY(state-info-text, #31708f)
    SET_PROPERTY(state-info-bg, #d9edf7)
    SET_PROPERTY(state-info-border, darken(spin(state-info-bg, -10), 7%))

    SET_PROPERTY(state-warning-text, #8a6d3b)
    SET_PROPERTY(state-warning-bg, #fcf8e3)
    SET_PROPERTY(state-warning-border, darken(spin(state-warning-bg, -10), 5%))

    SET_PROPERTY(state-danger-text, #a94442)
    SET_PROPERTY(state-danger-bg, #f2dede)
    SET_PROPERTY(state-danger-border, darken(spin(state-danger-bg, -10), 5%))


    //== Tooltips
    //
    //

    // Tooltip max width
    SET_PROPERTY(tooltip-max-width, 200px)
    // Tooltip text color
    SET_PROPERTY(tooltip-color, #fff)
    // Tooltip background color
    SET_PROPERTY(tooltip-bg, #000)
    SET_PROPERTY(tooltip-opacity, .9)

    // Tooltip arrow width
    SET_PROPERTY(tooltip-arrow-width, 5px)
    // Tooltip arrow color
    SET_PROPERTY(tooltip-arrow-color, tooltip-bg)


    //== Popovers
    //
    //

    // Popover body background color
    SET_PROPERTY(popover-bg, #fff)
    // Popover maximum width
    SET_PROPERTY(popover-max-width, 276px)
    // Popover border color
    SET_PROPERTY(popover-border-color, rgba(0,0,0,.2))
    // Popover fallback border color
    SET_PROPERTY(popover-fallback-border-color, #ccc)

    // Popover title background color
    SET_PROPERTY(popover-title-bg, darken(popover-bg, 3%))

    // Popover arrow width
    SET_PROPERTY(popover-arrow-width, 10px)
    // Popover arrow color
    SET_PROPERTY(popover-arrow-color, #fff)

    // Popover outer arrow width
    SET_PROPERTY(popover-arrow-outer-width, (popover-arrow-width + 1))
    // Popover outer arrow color
    SET_PROPERTY(popover-arrow-outer-color, fadein(popover-border-color, 5%))
    // Popover outer arrow fallback color
    SET_PROPERTY(popover-arrow-outer-fallback-color, darken(popover-fallback-border-color, 20%))


    //== Labels
    //
    //

    // Default label background color
    SET_PROPERTY(label-default-bg, gray-light)
    // Primary label background color
    SET_PROPERTY(label-primary-bg, brand-primary)
    // Success label background color
    SET_PROPERTY(label-success-bg, brand-success)
    // Info label background color
    SET_PROPERTY(label-info-bg, brand-info)
    // Warning label background color
    SET_PROPERTY(label-warning-bg, brand-warning)
    // Danger label background color
    SET_PROPERTY(label-danger-bg, brand-danger)

    // Default label text color
    SET_PROPERTY(label-color, #fff)
    // Default text color of a linked label
    SET_PROPERTY(label-link-hover-color, #fff)


    //== Modals
    //
    //

    // Padding applied to the modal body
    SET_PROPERTY(modal-inner-padding, 20px)

    // Padding applied to the modal title
    SET_PROPERTY(modal-title-padding, 15px)
    // Modal title line-height
    SET_PROPERTY(modal-title-line-height, line-height-base)

    // Background color of modal content area
    SET_PROPERTY(modal-content-bg, #fff)
    // Modal content border color
    SET_PROPERTY(modal-content-border-color, rgba(0,0,0,.2))
    // Modal content border color for IE8
    SET_PROPERTY(modal-content-fallback-border-color, #999)

    // Modal backdrop background color
    SET_PROPERTY(modal-backdrop-bg, #000)
    // Modal backdrop opacity
    SET_PROPERTY(modal-backdrop-opacity, .5)
    // Modal header border color
    SET_PROPERTY(modal-header-border-color, #e5e5e5)
    // Modal footer border color
    SET_PROPERTY(modal-footer-border-color, modal-header-border-color)

    SET_PROPERTY(modal-lg, 900px)
    SET_PROPERTY(modal-md, 600px)
    SET_PROPERTY(modal-sm, 300px)


    //== Alerts
    //
    // Define alert colors, border radius, and padding.

    SET_PROPERTY(alert-padding, 15px)
    SET_PROPERTY(alert-border-radius, border-radius-base)
    SET_PROPERTY(alert-link-font-weight, bold)

    SET_PROPERTY(alert-success-bg, state-success-bg)
    SET_PROPERTY(alert-success-text, state-success-text)
    SET_PROPERTY(alert-success-border, state-success-border)

    SET_PROPERTY(alert-info-bg, state-info-bg)
    SET_PROPERTY(alert-info-text, state-info-text)
    SET_PROPERTY(alert-info-border, state-info-border)

    SET_PROPERTY(alert-warning-bg, state-warning-bg)
    SET_PROPERTY(alert-warning-text, state-warning-text)
    SET_PROPERTY(alert-warning-border, state-warning-border)

    SET_PROPERTY(alert-danger-bg, state-danger-bg)
    SET_PROPERTY(alert-danger-text, state-danger-text)
    SET_PROPERTY(alert-danger-border, state-danger-border)


    //== Progress bars
    //
    //

    // Background color of the whole progress component
    SET_PROPERTY(progress-bg, #f5f5f5)
    // Progress bar text color
    SET_PROPERTY(progress-bar-color, #fff)

    // Default progress bar color
    SET_PROPERTY(progress-bar-bg, brand-primary)
    // Success progress bar color
    SET_PROPERTY(progress-bar-success-bg, brand-success)
    // Warning progress bar color
    SET_PROPERTY(progress-bar-warning-bg, brand-warning)
    // Danger progress bar color
    SET_PROPERTY(progress-bar-danger-bg, brand-danger)
    // Info progress bar color
    SET_PROPERTY(progress-bar-info-bg, brand-info)


    //== List group
    //
    //

    // Background color on `.list-group-item`
    SET_PROPERTY(list-group-bg, #fff)
    // `.list-group-item` border color
    SET_PROPERTY(list-group-border, #ddd)
    // List group border radius
    SET_PROPERTY(list-group-border-radius, border-radius-base)

    // Background color of single list elements on hover
    SET_PROPERTY(list-group-hover-bg, #f5f5f5)
    // Text color of active list elements
    SET_PROPERTY(list-group-active-color, component-active-color)
    // Background color of active list elements
    SET_PROPERTY(list-group-active-bg, component-active-bg)
    // Border color of active list elements
    SET_PROPERTY(list-group-active-border, list-group-active-bg)
    SET_PROPERTY(list-group-active-text-color, lighten(list-group-active-bg, 40%))

    SET_PROPERTY(list-group-link-color, #555)
    SET_PROPERTY(list-group-link-heading-color, #333)


    //== Panels
    //
    //

    SET_PROPERTY(panel-bg, #fff)
    SET_PROPERTY(panel-body-padding, 15px)
    SET_PROPERTY(panel-border-radius, border-radius-base)

    // Border color for elements within panels
    SET_PROPERTY(panel-inner-border, #ddd)
    SET_PROPERTY(panel-footer-bg, #f5f5f5)

    SET_PROPERTY(panel-default-text, gray-dark)
    SET_PROPERTY(panel-default-border, #ddd)
    SET_PROPERTY(panel-default-heading-bg, #f5f5f5)

    SET_PROPERTY(panel-primary-text, #fff)
    SET_PROPERTY(panel-primary-border, brand-primary)
    SET_PROPERTY(panel-primary-heading-bg, brand-primary)

    SET_PROPERTY(panel-success-text, state-success-text)
    SET_PROPERTY(panel-success-border, state-success-border)
    SET_PROPERTY(panel-success-heading-bg, state-success-bg)

    SET_PROPERTY(panel-info-text, state-info-text)
    SET_PROPERTY(panel-info-border, state-info-border)
    SET_PROPERTY(panel-info-heading-bg, state-info-bg)

    SET_PROPERTY(panel-warning-text, state-warning-text)
    SET_PROPERTY(panel-warning-border, state-warning-border)
    SET_PROPERTY(panel-warning-heading-bg, state-warning-bg)

    SET_PROPERTY(panel-danger-text, state-danger-text)
    SET_PROPERTY(panel-danger-border, state-danger-border)
    SET_PROPERTY(panel-danger-heading-bg, state-danger-bg)
    */

    // == Thumbnails ==
    // Padding around the thumbnail image
    SET_PROPERTY(thumbnail-padding, 4)
    // Thumbnail background color
    SET_PROPERTY_BY_ID(thumbnail-bg, body-bg)
    // Thumbnail border color
    SET_PROPERTY(thumbnail-border, "#ddd")
    // Thumbnail border radius
    SET_PROPERTY_BY_ID(thumbnail-border-radius, border-radius-base)

    // needless
    // Custom text color for thumbnail captions
//    SET_PROPERTY_BY_ID(thumbnail-caption-color, text-color)
    // Padding around the thumbnail caption
//    SET_PROPERTY(thumbnail-caption-padding, 9)

    /*
    //== Wells
    //
    //

    SET_PROPERTY(well-bg, #f5f5f5)
    SET_PROPERTY(well-border, darken(well-bg, 7%))


    //== Badges
    //
    //

    SET_PROPERTY(badge-color, #fff)
    // Linked badge text color on hover
    SET_PROPERTY(badge-link-hover-color, #fff)
    SET_PROPERTY(badge-bg, gray-light)

    // Badge text color in active nav link
    SET_PROPERTY(badge-active-color, link-color)
    // Badge background color in active nav link
    SET_PROPERTY(badge-active-bg, #fff)

    SET_PROPERTY(badge-font-weight, bold)
    SET_PROPERTY(badge-line-height, 1)
    SET_PROPERTY(badge-border-radius, 10px)


    //== Breadcrumbs
    //
    //

    SET_PROPERTY(breadcrumb-padding-vertical, 8px)
    SET_PROPERTY(breadcrumb-padding-horizontal, 15px)
    // Breadcrumb background color
    SET_PROPERTY(breadcrumb-bg, #f5f5f5)
    // Breadcrumb text color
    SET_PROPERTY(breadcrumb-color, #ccc)
    // Text color of current page in the breadcrumb
    SET_PROPERTY(breadcrumb-active-color, gray-light)
    // Textual separator for between breadcrumb elements
    SET_PROPERTY(breadcrumb-separator, "/")


    //== Carousel
    //
    //

    SET_PROPERTY(carousel-text-shadow, 0 1px 2px rgba(0,0,0,.6))

    SET_PROPERTY(carousel-control-color, #fff)
    SET_PROPERTY(carousel-control-width, 15%)
    SET_PROPERTY(carousel-control-opacity, .5)
    SET_PROPERTY(carousel-control-font-size, 20px)

    SET_PROPERTY(carousel-indicator-active-bg, #fff)
    SET_PROPERTY(carousel-indicator-border-color, #fff)

    SET_PROPERTY(carousel-caption-color, #fff)


    //== Close
    //
    //

    SET_PROPERTY(close-font-weight, bold)
    SET_PROPERTY(close-color, #000)
    SET_PROPERTY(close-text-shadow, 0 1px 0 #fff)


    //== Code
    //
    //

    SET_PROPERTY(code-color, #c7254e)
    SET_PROPERTY(code-bg, #f9f2f4)

    SET_PROPERTY(kbd-color, #fff)
    SET_PROPERTY(kbd-bg, #333)

    SET_PROPERTY(pre-bg, #f5f5f5)
    SET_PROPERTY(pre-color, gray-dark)
    SET_PROPERTY(pre-border-color, #ccc)
    SET_PROPERTY(pre-scrollable-max-height, 340px)


    //== Type
    //
    //

    // Text muted color
    SET_PROPERTY(text-muted, gray-light)
    // Abbreviations and acronyms border color
    SET_PROPERTY(abbr-border-color, gray-light)
    // Headings small color
    SET_PROPERTY(headings-small-color, gray-light)
    // Blockquote small color
    SET_PROPERTY(blockquote-small-color, gray-light)
    // Blockquote font size
    SET_PROPERTY(blockquote-font-size, (font-size-base * 1.25))
    // Blockquote border color
    SET_PROPERTY(blockquote-border-color, gray-lighter)
    // Page header border color
    SET_PROPERTY(page-header-border-color, gray-lighter)


    //== Miscellaneous
    //
    //

    // Horizontal line color.
    SET_PROPERTY(hr-border, gray-lighter)

    // Horizontal offset for forms and lists.
    SET_PROPERTY(component-offset-horizontal, 180px)
     */
}
