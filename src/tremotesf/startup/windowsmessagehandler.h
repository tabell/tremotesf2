#ifndef TREMOTESF_WINDOWSMESSAGEHANDLER_H
#define TREMOTESF_WINDOWSMESSAGEHANDLER_H

#include <QtMessageHandler>

namespace tremotesf {
    void windowsMessageHandler(QtMsgType type, const QMessageLogContext& context, const QString& message);
}

#endif
