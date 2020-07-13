/* 
 * OEML - REST API
 *
 * This section will provide necessary information about the `CoinAPI OEML REST API` protocol. 
 *
 * The version of the OpenAPI document: v1
 * 
 * Generated by: https://github.com/openapitools/openapi-generator.git
 */

using System;
using System.Linq;
using System.IO;
using System.Text;
using System.Text.RegularExpressions;
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Runtime.Serialization;
using Newtonsoft.Json;
using Newtonsoft.Json.Converters;
using System.ComponentModel.DataAnnotations;
using OpenAPIDateConverter = CoinAPI.OMS.REST.V1.Client.OpenAPIDateConverter;

namespace CoinAPI.OMS.REST.V1.Model
{
    /// <summary>
    /// Defines Severity
    /// </summary>
    
    [JsonConverter(typeof(StringEnumConverter))]
    
    public enum Severity
    {
        /// <summary>
        /// Enum INFO for value: INFO
        /// </summary>
        [EnumMember(Value = "INFO")]
        INFO = 1,

        /// <summary>
        /// Enum WARNING for value: WARNING
        /// </summary>
        [EnumMember(Value = "WARNING")]
        WARNING = 2,

        /// <summary>
        /// Enum ERROR for value: ERROR
        /// </summary>
        [EnumMember(Value = "ERROR")]
        ERROR = 3

    }

}
