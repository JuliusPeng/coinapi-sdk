<?php
/**
 * PositionData
 *
 * PHP version 5
 *
 * @category Class
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 */

/**
 * OMS - REST API
 *
 * Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum. ###Lifecycle Contrary to popular belief, Lorem Ipsum is not simply random text. It has roots in a piece of classical Latin literature from 45 BC, making it over 2000 years old. Richard McClintock, a Latin professor at Hampden-Sydney College in Virginia, looked up one of the more obscure Latin words, consectetur, from a Lorem Ipsum passage, and going through the cites of the word in classical literature, discovered the undoubtable source. Lorem Ipsum comes from sections 1.10.32 and 1.10.33 of \"de Finibus Bonorum et Malorum\" (The Extremes of Good and Evil) by Cicero, written in 45 BC. This book is a treatise on the theory of ethics, very popular during the Renaissance. The first line of Lorem Ipsum, \"Lorem ipsum dolor sit amet..\", comes from a line in section 1.10.32. The standard chunk of Lorem Ipsum used since the 1500s is reproduced below for those interested. Sections 1.10.32 and 1.10.33 from \"de Finibus Bonorum et Malorum\" by Cicero are also reproduced in their exact original form, accompanied by English versions from the 1914 translation by H. Rackham. ###Lifecycle 2 Contrary to popular belief, Lorem Ipsum is not simply random text. It has roots in a piece of classical Latin literature from 45 BC, making it over 2000 years old. Richard McClintock, a Latin professor at Hampden-Sydney College in Virginia, looked up one of the more obscure Latin words, consectetur, from a Lorem Ipsum passage, and going through the cites of the word in classical literature, discovered the undoubtable source. Lorem Ipsum comes from sections 1.10.32 and 1.10.33 of \"de Finibus Bonorum et Malorum\" (The Extremes of Good and Evil) by Cicero, written in 45 BC. This book is a treatise on the theory of ethics, very popular during the Renaissance. The first line of Lorem Ipsum, \"Lorem ipsum dolor sit amet..\", comes from a line in section 1.10.32. The standard chunk of Lorem Ipsum used since the 1500s is reproduced below for those interested. Sections 1.10.32 and 1.10.33 from \"de Finibus Bonorum et Malorum\" by Cicero are also reproduced in their exact original form, accompanied by English versions from the 1914 translation by H. Rackhama.
 *
 * The version of the OpenAPI document: v1
 * 
 * Generated by: https://openapi-generator.tech
 * OpenAPI Generator version: 4.3.1
 */

/**
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

namespace OpenAPI\Client\Model;

use \ArrayAccess;
use \OpenAPI\Client\ObjectSerializer;

/**
 * PositionData Class Doc Comment
 *
 * @category Class
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 */
class PositionData implements ModelInterface, ArrayAccess
{
    const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      *
      * @var string
      */
    protected static $openAPIModelName = 'position_data';

    /**
      * Array of property to type mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPITypes = [
        'id' => 'string',
        'symbol_exchange' => 'string',
        'symbol_coinapi' => 'string',
        'avg_entry_price' => 'float',
        'quantity' => 'float',
        'is_buy' => 'bool',
        'unrealised_pn_l' => 'float',
        'leverage' => 'float',
        'cross_margin' => 'bool',
        'liquidation_price' => 'float',
        'raw_data' => 'string'
    ];

    /**
      * Array of property to format mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPIFormats = [
        'id' => null,
        'symbol_exchange' => null,
        'symbol_coinapi' => null,
        'avg_entry_price' => null,
        'quantity' => null,
        'is_buy' => null,
        'unrealised_pn_l' => null,
        'leverage' => null,
        'cross_margin' => null,
        'liquidation_price' => null,
        'raw_data' => null
    ];

    /**
     * Array of property to type mappings. Used for (de)serialization
     *
     * @return array
     */
    public static function openAPITypes()
    {
        return self::$openAPITypes;
    }

    /**
     * Array of property to format mappings. Used for (de)serialization
     *
     * @return array
     */
    public static function openAPIFormats()
    {
        return self::$openAPIFormats;
    }

    /**
     * Array of attributes where the key is the local name,
     * and the value is the original name
     *
     * @var string[]
     */
    protected static $attributeMap = [
        'id' => 'id',
        'symbol_exchange' => 'symbol_exchange',
        'symbol_coinapi' => 'symbol_coinapi',
        'avg_entry_price' => 'avg_entry_price',
        'quantity' => 'quantity',
        'is_buy' => 'is_buy',
        'unrealised_pn_l' => 'unrealised_pn_l',
        'leverage' => 'leverage',
        'cross_margin' => 'cross_margin',
        'liquidation_price' => 'liquidation_price',
        'raw_data' => 'raw_data'
    ];

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @var string[]
     */
    protected static $setters = [
        'id' => 'setId',
        'symbol_exchange' => 'setSymbolExchange',
        'symbol_coinapi' => 'setSymbolCoinapi',
        'avg_entry_price' => 'setAvgEntryPrice',
        'quantity' => 'setQuantity',
        'is_buy' => 'setIsBuy',
        'unrealised_pn_l' => 'setUnrealisedPnL',
        'leverage' => 'setLeverage',
        'cross_margin' => 'setCrossMargin',
        'liquidation_price' => 'setLiquidationPrice',
        'raw_data' => 'setRawData'
    ];

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @var string[]
     */
    protected static $getters = [
        'id' => 'getId',
        'symbol_exchange' => 'getSymbolExchange',
        'symbol_coinapi' => 'getSymbolCoinapi',
        'avg_entry_price' => 'getAvgEntryPrice',
        'quantity' => 'getQuantity',
        'is_buy' => 'getIsBuy',
        'unrealised_pn_l' => 'getUnrealisedPnL',
        'leverage' => 'getLeverage',
        'cross_margin' => 'getCrossMargin',
        'liquidation_price' => 'getLiquidationPrice',
        'raw_data' => 'getRawData'
    ];

    /**
     * Array of attributes where the key is the local name,
     * and the value is the original name
     *
     * @return array
     */
    public static function attributeMap()
    {
        return self::$attributeMap;
    }

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @return array
     */
    public static function setters()
    {
        return self::$setters;
    }

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @return array
     */
    public static function getters()
    {
        return self::$getters;
    }

    /**
     * The original name of the model.
     *
     * @return string
     */
    public function getModelName()
    {
        return self::$openAPIModelName;
    }

    

    

    /**
     * Associative array for storing property values
     *
     * @var mixed[]
     */
    protected $container = [];

    /**
     * Constructor
     *
     * @param mixed[] $data Associated array of property values
     *                      initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->container['id'] = isset($data['id']) ? $data['id'] : null;
        $this->container['symbol_exchange'] = isset($data['symbol_exchange']) ? $data['symbol_exchange'] : null;
        $this->container['symbol_coinapi'] = isset($data['symbol_coinapi']) ? $data['symbol_coinapi'] : null;
        $this->container['avg_entry_price'] = isset($data['avg_entry_price']) ? $data['avg_entry_price'] : null;
        $this->container['quantity'] = isset($data['quantity']) ? $data['quantity'] : null;
        $this->container['is_buy'] = isset($data['is_buy']) ? $data['is_buy'] : null;
        $this->container['unrealised_pn_l'] = isset($data['unrealised_pn_l']) ? $data['unrealised_pn_l'] : null;
        $this->container['leverage'] = isset($data['leverage']) ? $data['leverage'] : null;
        $this->container['cross_margin'] = isset($data['cross_margin']) ? $data['cross_margin'] : null;
        $this->container['liquidation_price'] = isset($data['liquidation_price']) ? $data['liquidation_price'] : null;
        $this->container['raw_data'] = isset($data['raw_data']) ? $data['raw_data'] : null;
    }

    /**
     * Show all the invalid properties with reasons.
     *
     * @return array invalid properties with reasons
     */
    public function listInvalidProperties()
    {
        $invalidProperties = [];

        return $invalidProperties;
    }

    /**
     * Validate all the properties in the model
     * return true if all passed
     *
     * @return bool True if all properties are valid
     */
    public function valid()
    {
        return count($this->listInvalidProperties()) === 0;
    }


    /**
     * Gets id
     *
     * @return string|null
     */
    public function getId()
    {
        return $this->container['id'];
    }

    /**
     * Sets id
     *
     * @param string|null $id Unique position ID
     *
     * @return $this
     */
    public function setId($id)
    {
        $this->container['id'] = $id;

        return $this;
    }

    /**
     * Gets symbol_exchange
     *
     * @return string|null
     */
    public function getSymbolExchange()
    {
        return $this->container['symbol_exchange'];
    }

    /**
     * Sets symbol_exchange
     *
     * @param string|null $symbol_exchange The contract for this position.
     *
     * @return $this
     */
    public function setSymbolExchange($symbol_exchange)
    {
        $this->container['symbol_exchange'] = $symbol_exchange;

        return $this;
    }

    /**
     * Gets symbol_coinapi
     *
     * @return string|null
     */
    public function getSymbolCoinapi()
    {
        return $this->container['symbol_coinapi'];
    }

    /**
     * Sets symbol_coinapi
     *
     * @param string|null $symbol_coinapi The coinapi contract for this position.
     *
     * @return $this
     */
    public function setSymbolCoinapi($symbol_coinapi)
    {
        $this->container['symbol_coinapi'] = $symbol_coinapi;

        return $this;
    }

    /**
     * Gets avg_entry_price
     *
     * @return float|null
     */
    public function getAvgEntryPrice()
    {
        return $this->container['avg_entry_price'];
    }

    /**
     * Sets avg_entry_price
     *
     * @param float|null $avg_entry_price avg_entry_price
     *
     * @return $this
     */
    public function setAvgEntryPrice($avg_entry_price)
    {
        $this->container['avg_entry_price'] = $avg_entry_price;

        return $this;
    }

    /**
     * Gets quantity
     *
     * @return float|null
     */
    public function getQuantity()
    {
        return $this->container['quantity'];
    }

    /**
     * Sets quantity
     *
     * @param float|null $quantity The current position amount in contracts.
     *
     * @return $this
     */
    public function setQuantity($quantity)
    {
        $this->container['quantity'] = $quantity;

        return $this;
    }

    /**
     * Gets is_buy
     *
     * @return bool|null
     */
    public function getIsBuy()
    {
        return $this->container['is_buy'];
    }

    /**
     * Sets is_buy
     *
     * @param bool|null $is_buy is_buy
     *
     * @return $this
     */
    public function setIsBuy($is_buy)
    {
        $this->container['is_buy'] = $is_buy;

        return $this;
    }

    /**
     * Gets unrealised_pn_l
     *
     * @return float|null
     */
    public function getUnrealisedPnL()
    {
        return $this->container['unrealised_pn_l'];
    }

    /**
     * Sets unrealised_pn_l
     *
     * @param float|null $unrealised_pn_l Unrealised PNL is all the unrealised profit or loss coming from your portfolio's open positions.
     *
     * @return $this
     */
    public function setUnrealisedPnL($unrealised_pn_l)
    {
        $this->container['unrealised_pn_l'] = $unrealised_pn_l;

        return $this;
    }

    /**
     * Gets leverage
     *
     * @return float|null
     */
    public function getLeverage()
    {
        return $this->container['leverage'];
    }

    /**
     * Sets leverage
     *
     * @param float|null $leverage 1 / initMarginReq.
     *
     * @return $this
     */
    public function setLeverage($leverage)
    {
        $this->container['leverage'] = $leverage;

        return $this;
    }

    /**
     * Gets cross_margin
     *
     * @return bool|null
     */
    public function getCrossMargin()
    {
        return $this->container['cross_margin'];
    }

    /**
     * Sets cross_margin
     *
     * @param bool|null $cross_margin True/false depending on whether you set cross margin on this position.
     *
     * @return $this
     */
    public function setCrossMargin($cross_margin)
    {
        $this->container['cross_margin'] = $cross_margin;

        return $this;
    }

    /**
     * Gets liquidation_price
     *
     * @return float|null
     */
    public function getLiquidationPrice()
    {
        return $this->container['liquidation_price'];
    }

    /**
     * Sets liquidation_price
     *
     * @param float|null $liquidation_price Once markPrice reaches this price, this position will be liquidated.
     *
     * @return $this
     */
    public function setLiquidationPrice($liquidation_price)
    {
        $this->container['liquidation_price'] = $liquidation_price;

        return $this;
    }

    /**
     * Gets raw_data
     *
     * @return string|null
     */
    public function getRawData()
    {
        return $this->container['raw_data'];
    }

    /**
     * Sets raw_data
     *
     * @param string|null $raw_data raw_data
     *
     * @return $this
     */
    public function setRawData($raw_data)
    {
        $this->container['raw_data'] = $raw_data;

        return $this;
    }
    /**
     * Returns true if offset exists. False otherwise.
     *
     * @param integer $offset Offset
     *
     * @return boolean
     */
    public function offsetExists($offset)
    {
        return isset($this->container[$offset]);
    }

    /**
     * Gets offset.
     *
     * @param integer $offset Offset
     *
     * @return mixed
     */
    public function offsetGet($offset)
    {
        return isset($this->container[$offset]) ? $this->container[$offset] : null;
    }

    /**
     * Sets value based on offset.
     *
     * @param integer $offset Offset
     * @param mixed   $value  Value to be set
     *
     * @return void
     */
    public function offsetSet($offset, $value)
    {
        if (is_null($offset)) {
            $this->container[] = $value;
        } else {
            $this->container[$offset] = $value;
        }
    }

    /**
     * Unsets offset.
     *
     * @param integer $offset Offset
     *
     * @return void
     */
    public function offsetUnset($offset)
    {
        unset($this->container[$offset]);
    }

    /**
     * Gets the string presentation of the object
     *
     * @return string
     */
    public function __toString()
    {
        return json_encode(
            ObjectSerializer::sanitizeForSerialization($this),
            JSON_PRETTY_PRINT
        );
    }

    /**
     * Gets a header-safe presentation of the object
     *
     * @return string
     */
    public function toHeaderValue()
    {
        return json_encode(ObjectSerializer::sanitizeForSerialization($this));
    }
}


