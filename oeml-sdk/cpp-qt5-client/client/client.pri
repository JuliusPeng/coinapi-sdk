QT += network

HEADERS += \
# Models
    $${PWD}/OAIBalance.h \
    $${PWD}/OAIBalance_data.h \
    $${PWD}/OAICancelOrderAllRequest.h \
    $${PWD}/OAICancelOrderSingleRequest.h \
    $${PWD}/OAIMessage.h \
    $${PWD}/OAINewOrderSingle.h \
    $${PWD}/OAIOrdSide.h \
    $${PWD}/OAIOrdStatus.h \
    $${PWD}/OAIOrdType.h \
    $${PWD}/OAIOrderExecutionReport.h \
    $${PWD}/OAIOrderExecutionReport_allOf.h \
    $${PWD}/OAIPosition.h \
    $${PWD}/OAIPosition_data.h \
    $${PWD}/OAISeverity.h \
    $${PWD}/OAITimeInForce.h \
    $${PWD}/OAIValidationError.h \
# APIs
    $${PWD}/OAIBalancesApi.h \
    $${PWD}/OAIOrdersApi.h \
    $${PWD}/OAIPositionsApi.h \
# Others
    $${PWD}/OAIHelpers.h \
    $${PWD}/OAIHttpRequest.h \
    $${PWD}/OAIObject.h \
    $${PWD}/OAIEnum.h \
    $${PWD}/OAIHttpFileElement.h

SOURCES += \
# Models
    $${PWD}/OAIBalance.cpp \
    $${PWD}/OAIBalance_data.cpp \
    $${PWD}/OAICancelOrderAllRequest.cpp \
    $${PWD}/OAICancelOrderSingleRequest.cpp \
    $${PWD}/OAIMessage.cpp \
    $${PWD}/OAINewOrderSingle.cpp \
    $${PWD}/OAIOrdSide.cpp \
    $${PWD}/OAIOrdStatus.cpp \
    $${PWD}/OAIOrdType.cpp \
    $${PWD}/OAIOrderExecutionReport.cpp \
    $${PWD}/OAIOrderExecutionReport_allOf.cpp \
    $${PWD}/OAIPosition.cpp \
    $${PWD}/OAIPosition_data.cpp \
    $${PWD}/OAISeverity.cpp \
    $${PWD}/OAITimeInForce.cpp \
    $${PWD}/OAIValidationError.cpp \
# APIs
    $${PWD}/OAIBalancesApi.cpp \
    $${PWD}/OAIOrdersApi.cpp \
    $${PWD}/OAIPositionsApi.cpp \
# Others
    $${PWD}/OAIHelpers.cpp \
    $${PWD}/OAIHttpRequest.cpp \
    $${PWD}/OAIHttpFileElement.cpp

