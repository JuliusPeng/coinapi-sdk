/*
 * OEML - REST API
 *
 * This section will provide necessary information about the `CoinAPI OEML REST API` protocol. 
 *
 * API version: v1
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package openapi
// OrdStatus Order statuses and the lifecycle are documented in the separate section: <a href=\"#oeml-order-lifecycle\">OEML / Starter Guide / Order Lifecycle</a> 
type OrdStatus string

// List of OrdStatus
const (
	RECEIVED OrdStatus = "RECEIVED"
	ROUTING OrdStatus = "ROUTING"
	ROUTED OrdStatus = "ROUTED"
	NEW OrdStatus = "NEW"
	PENDING_CANCEL OrdStatus = "PENDING_CANCEL"
	PARTIALLY_FILLED OrdStatus = "PARTIALLY_FILLED"
	FILLED OrdStatus = "FILLED"
	CANCELED OrdStatus = "CANCELED"
	REJECTED OrdStatus = "REJECTED"
)
