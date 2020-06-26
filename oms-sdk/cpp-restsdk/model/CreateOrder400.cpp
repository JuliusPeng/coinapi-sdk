/**
 * OMS - REST API
 * Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum. ###Lifecycle Contrary to popular belief, Lorem Ipsum is not simply random text. It has roots in a piece of classical Latin literature from 45 BC, making it over 2000 years old. Richard McClintock, a Latin professor at Hampden-Sydney College in Virginia, looked up one of the more obscure Latin words, consectetur, from a Lorem Ipsum passage, and going through the cites of the word in classical literature, discovered the undoubtable source. Lorem Ipsum comes from sections 1.10.32 and 1.10.33 of \"de Finibus Bonorum et Malorum\" (The Extremes of Good and Evil) by Cicero, written in 45 BC. This book is a treatise on the theory of ethics, very popular during the Renaissance. The first line of Lorem Ipsum, \"Lorem ipsum dolor sit amet..\", comes from a line in section 1.10.32. The standard chunk of Lorem Ipsum used since the 1500s is reproduced below for those interested. Sections 1.10.32 and 1.10.33 from \"de Finibus Bonorum et Malorum\" by Cicero are also reproduced in their exact original form, accompanied by English versions from the 1914 translation by H. Rackham. ###Lifecycle 2 Contrary to popular belief, Lorem Ipsum is not simply random text. It has roots in a piece of classical Latin literature from 45 BC, making it over 2000 years old. Richard McClintock, a Latin professor at Hampden-Sydney College in Virginia, looked up one of the more obscure Latin words, consectetur, from a Lorem Ipsum passage, and going through the cites of the word in classical literature, discovered the undoubtable source. Lorem Ipsum comes from sections 1.10.32 and 1.10.33 of \"de Finibus Bonorum et Malorum\" (The Extremes of Good and Evil) by Cicero, written in 45 BC. This book is a treatise on the theory of ethics, very popular during the Renaissance. The first line of Lorem Ipsum, \"Lorem ipsum dolor sit amet..\", comes from a line in section 1.10.32. The standard chunk of Lorem Ipsum used since the 1500s is reproduced below for those interested. Sections 1.10.32 and 1.10.33 from \"de Finibus Bonorum et Malorum\" by Cicero are also reproduced in their exact original form, accompanied by English versions from the 1914 translation by H. Rackhama. 
 *
 * The version of the OpenAPI document: v1
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.3.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "CreateOrder400.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




CreateOrder400::CreateOrder400()
{
    m_Type = utility::conversions::to_string_t("");
    m_TypeIsSet = false;
    m_Title = utility::conversions::to_string_t("");
    m_TitleIsSet = false;
    m_Status = 0.0;
    m_StatusIsSet = false;
    m_TraceId = utility::conversions::to_string_t("");
    m_TraceIdIsSet = false;
    m_Errors = utility::conversions::to_string_t("");
    m_ErrorsIsSet = false;
}

CreateOrder400::~CreateOrder400()
{
}

void CreateOrder400::validate()
{
    // TODO: implement validation
}

web::json::value CreateOrder400::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_TypeIsSet)
    {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(m_Type);
    }
    if(m_TitleIsSet)
    {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(m_Title);
    }
    if(m_StatusIsSet)
    {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(m_Status);
    }
    if(m_TraceIdIsSet)
    {
        val[utility::conversions::to_string_t("traceId")] = ModelBase::toJson(m_TraceId);
    }
    if(m_ErrorsIsSet)
    {
        val[utility::conversions::to_string_t("errors")] = ModelBase::toJson(m_Errors);
    }

    return val;
}

bool CreateOrder400::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_type;
            ok &= ModelBase::fromJson(fieldValue, refVal_type);
            setType(refVal_type);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("title")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("title"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_title;
            ok &= ModelBase::fromJson(fieldValue, refVal_title);
            setTitle(refVal_title);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            double refVal_status;
            ok &= ModelBase::fromJson(fieldValue, refVal_status);
            setStatus(refVal_status);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("traceId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("traceId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_traceId;
            ok &= ModelBase::fromJson(fieldValue, refVal_traceId);
            setTraceId(refVal_traceId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("errors")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("errors"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_errors;
            ok &= ModelBase::fromJson(fieldValue, refVal_errors);
            setErrors(refVal_errors);
        }
    }
    return ok;
}

void CreateOrder400::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_TypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("type"), m_Type));
    }
    if(m_TitleIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("title"), m_Title));
    }
    if(m_StatusIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("status"), m_Status));
    }
    if(m_TraceIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("traceId"), m_TraceId));
    }
    if(m_ErrorsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("errors"), m_Errors));
    }
}

bool CreateOrder400::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("type")))
    {
        utility::string_t refVal_type;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("type")), refVal_type );
        setType(refVal_type);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("title")))
    {
        utility::string_t refVal_title;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("title")), refVal_title );
        setTitle(refVal_title);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("status")))
    {
        double refVal_status;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("status")), refVal_status );
        setStatus(refVal_status);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("traceId")))
    {
        utility::string_t refVal_traceId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("traceId")), refVal_traceId );
        setTraceId(refVal_traceId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("errors")))
    {
        utility::string_t refVal_errors;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("errors")), refVal_errors );
        setErrors(refVal_errors);
    }
    return ok;
}

utility::string_t CreateOrder400::getType() const
{
    return m_Type;
}

void CreateOrder400::setType(const utility::string_t& value)
{
    m_Type = value;
    m_TypeIsSet = true;
}

bool CreateOrder400::typeIsSet() const
{
    return m_TypeIsSet;
}

void CreateOrder400::unsetType()
{
    m_TypeIsSet = false;
}
utility::string_t CreateOrder400::getTitle() const
{
    return m_Title;
}

void CreateOrder400::setTitle(const utility::string_t& value)
{
    m_Title = value;
    m_TitleIsSet = true;
}

bool CreateOrder400::titleIsSet() const
{
    return m_TitleIsSet;
}

void CreateOrder400::unsetTitle()
{
    m_TitleIsSet = false;
}
double CreateOrder400::getStatus() const
{
    return m_Status;
}

void CreateOrder400::setStatus(double value)
{
    m_Status = value;
    m_StatusIsSet = true;
}

bool CreateOrder400::statusIsSet() const
{
    return m_StatusIsSet;
}

void CreateOrder400::unsetStatus()
{
    m_StatusIsSet = false;
}
utility::string_t CreateOrder400::getTraceId() const
{
    return m_TraceId;
}

void CreateOrder400::setTraceId(const utility::string_t& value)
{
    m_TraceId = value;
    m_TraceIdIsSet = true;
}

bool CreateOrder400::traceIdIsSet() const
{
    return m_TraceIdIsSet;
}

void CreateOrder400::unsetTraceId()
{
    m_TraceIdIsSet = false;
}
utility::string_t CreateOrder400::getErrors() const
{
    return m_Errors;
}

void CreateOrder400::setErrors(const utility::string_t& value)
{
    m_Errors = value;
    m_ErrorsIsSet = true;
}

bool CreateOrder400::errorsIsSet() const
{
    return m_ErrorsIsSet;
}

void CreateOrder400::unsetErrors()
{
    m_ErrorsIsSet = false;
}
}
}
}
}


