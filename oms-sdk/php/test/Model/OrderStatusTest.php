<?php
/**
 * OrderStatusTest
 *
 * PHP version 5
 *
 * @category Class
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 */

/**
 * OEML - REST API
 *
 * Lorem2 Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum. ###Lifecycle Contrary to popular belief, Lorem Ipsum is not simply random text. It has roots in a piece of classical Latin literature from 45 BC, making it over 2000 years old. Richard McClintock, a Latin professor at Hampden-Sydney College in Virginia, looked up one of the more obscure Latin words, consectetur, from a Lorem Ipsum passage, and going through the cites of the word in classical literature, discovered the undoubtable source. Lorem Ipsum comes from sections 1.10.32 and 1.10.33 of \"de Finibus Bonorum et Malorum\" (The Extremes of Good and Evil) by Cicero, written in 45 BC. This book is a treatise on the theory of ethics, very popular during the Renaissance. The first line of Lorem Ipsum, \"Lorem ipsum dolor sit amet..\", comes from a line in section 1.10.32. The standard chunk of Lorem Ipsum used since the 1500s is reproduced below for those interested. Sections 1.10.32 and 1.10.33 from \"de Finibus Bonorum et Malorum\" by Cicero are also reproduced in their exact original form, accompanied by English versions from the 1914 translation by H. Rackham. ###Lifecycle 2 Contrary to popular belief, Lorem Ipsum is not simply random text. It has roots in a piece of classical Latin literature from 45 BC, making it over 2000 years old. Richard McClintock, a Latin professor at Hampden-Sydney College in Virginia, looked up one of the more obscure Latin words, consectetur, from a Lorem Ipsum passage, and going through the cites of the word in classical literature, discovered the undoubtable source. Lorem Ipsum comes from sections 1.10.32 and 1.10.33 of \"de Finibus Bonorum et Malorum\" (The Extremes of Good and Evil) by Cicero, written in 45 BC. This book is a treatise on the theory of ethics, very popular during the Renaissance. The first line of Lorem Ipsum, \"Lorem ipsum dolor sit amet..\", comes from a line in section 1.10.32. The standard chunk of Lorem Ipsum used since the 1500s is reproduced below for those interested. Sections 1.10.32 and 1.10.33 from \"de Finibus Bonorum et Malorum\" by Cicero are also reproduced in their exact original form, accompanied by English versions from the 1914 translation by H. Rackhama.
 *
 * The version of the OpenAPI document: v1
 * 
 * Generated by: https://openapi-generator.tech
 * OpenAPI Generator version: 4.3.1
 */

/**
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Please update the test case below to test the model.
 */

namespace OpenAPI\Client;

use PHPUnit\Framework\TestCase;

/**
 * OrderStatusTest Class Doc Comment
 *
 * @category    Class
 * @description Order statuses ##### Status description  | Name | Possible transitions to | Status description  | --- | --- | --- | | RECEIVED | REJECTED, ROUTING | We received an order and will send it to the exchange immedaitely | ROUTING | ROUTED | We are in the process of sending order to the exchange | ROUTED | REJECTED, NEW, PARTIALLY_FILLED, FILLED, CANCELED | Order was sent to the exchange from our side, but it&#39;s not yet active in order book | NEW | PARTIALLY_FILLED, FILLED, PENDING_CANCEL, CANCELED | Order is active in the order book and it&#39;s untouched | PENDING_CANCEL | NEW, PARTIALLY_FILLED, FILLED, CANCELED | We received order cancel request and relayed it succesfully to the exchange.  | PARTIALLY_FILLED | FILLED, PENDING_CANCEL, CANCELED | Order is active in the order book and it&#39;s partially filled | FILLED | | Order is no longer active in the order book as was completely filled  | CANCELED | | Order is no longer active in the order book as was canceled | REJECTED | | Order was rejected by OMS or exchange. ##### Status transitions  | Source Status | Destination status | Description | --- | --- | --- | | | RECEIVED | OMS received new order from you | | NEW | OMS received unseen new order from the exchange (order was relayed to the exchnage outside the OMS) | | PARTIALLY_FILLED | OMS received unseen partially filled order from the exchange (order was relayed to the exchnage outside the OMS) | RECEIVED | REJECTED | OMS rejected your order | RECEIVED | ROUTING | We started relaying order to the exchange | ROUTING | ROUTED | Order was relayed to the exchange and we are waiting to be active in the order book | ROUTED | REJECTED | Exchange rejected your order | ROUTED | NEW | Exchange accepted your passive order into order book | ROUTED | PARTIALLY_FILLED | Exchange actively filled part of your order and the remaining was accepted into order book | ROUTED | FILLED | Exchange actively filled your order in whole. | ROUTED | CANCELED | Exchange canceled your order before accepting it to the order book. | NEW | PARTIALLY_FILLED | Part of your order was filled. | NEW | FILLED | Whole order was filled. | NEW | PENDING_CANCEL | We received cancel request and successfully relayed it to the exchange. | NEW | CANCELED | Your order was canceled. | PARTIALLY_FILLED | FILLED | Remaining active part of the order was filled succesfully. | PARTIALLY_FILLED | PENDING_CANCEL | We received cancel request and successfully relayed it to the exchange. | PARTIALLY_FILLED | CANCELED | Your order was canceled. | PENDING_CANCEL | NEW | Exchange responded to the cancelation message that your order is fully active in the order book. | PENDING_CANCEL | PARTIALLY_FILLED | Your order was filled partially after we relayed cancelation message to the exchange. | PENDING_CANCEL | FILLED | Your order was completely filled before the cancel was executed by the exchange. | PENDING_CANCEL | CANCELED | Your order was canceled.
 * @package     OpenAPI\Client
 * @author      OpenAPI Generator team
 * @link        https://openapi-generator.tech
 */
class OrderStatusTest extends TestCase
{

    /**
     * Setup before running any test case
     */
    public static function setUpBeforeClass()
    {
    }

    /**
     * Setup before running each test case
     */
    public function setUp()
    {
    }

    /**
     * Clean up after running each test case
     */
    public function tearDown()
    {
    }

    /**
     * Clean up after running all test cases
     */
    public static function tearDownAfterClass()
    {
    }

    /**
     * Test "OrderStatus"
     */
    public function testOrderStatus()
    {
    }
}