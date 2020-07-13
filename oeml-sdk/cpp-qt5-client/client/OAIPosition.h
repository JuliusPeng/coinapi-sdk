/**
 * OEML - REST API
 * This section will provide necessary information about the `CoinAPI OEML REST API` protocol. 
 *
 * The version of the OpenAPI document: v1
 * Contact: support@coinapi.io
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIPosition.h
 *
 * 
 */

#ifndef OAIPosition_H
#define OAIPosition_H

#include <QJsonObject>

#include "OAIPosition_data.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIPosition : public OAIObject {
public:
    OAIPosition();
    OAIPosition(QString json);
    ~OAIPosition() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getExchangeId() const;
    void setExchangeId(const QString &exchange_id);
    bool is_exchange_id_Set() const;
    bool is_exchange_id_Valid() const;

    QList<OAIPosition_data> getData() const;
    void setData(const QList<OAIPosition_data> &data);
    bool is_data_Set() const;
    bool is_data_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString exchange_id;
    bool m_exchange_id_isSet;
    bool m_exchange_id_isValid;

    QList<OAIPosition_data> data;
    bool m_data_isSet;
    bool m_data_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIPosition)

#endif // OAIPosition_H
