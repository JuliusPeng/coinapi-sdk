--  OEML _ REST API
--  This section will provide necessary information about the `CoinAPI OEML REST API` protocol. 
--
--  The version of the OpenAPI document: v1
--  Contact: support@coinapi.io
--
--  NOTE: This package is auto generated by OpenAPI-Generator 4.3.1.
--  https://openapi-generator.tech
--  Do not edit the class manually.

with Swagger.Streams;
package body .Clients is

   --  Get balances
   --  Get current currency balance from all or single exchange.
   procedure V1_Balances_Get
      (Client : in out Client_Type;
       Exchange_Id : in Swagger.Nullable_UString;
       Result : out .Models.Balance_Type_Vectors.Vector) is
      URI   : Swagger.Clients.URI_Type;
      Reply : Swagger.Value_Type;
   begin
      Client.Set_Accept ((Swagger.Clients.APPLICATION_JSON,
                          Swagger.Clients.APPLICTION_JSON));

      URI.Add_Param ("exchange_id", Exchange_Id);
      URI.Set_Path ("/v1/balances");
      Client.Call (Swagger.Clients.GET, URI, Reply);
      .Models.Deserialize (Reply, "", Result);
   end V1_Balances_Get;

   --  Cancel all orders request
   --  This request cancels all open orders on single specified exchange.
   procedure V1_Orders_Cancel_All_Post
      (Client : in out Client_Type;
       Cancel_Order_All_Request_Type : in .Models.CancelOrderAllRequest_Type;
       Result : out .Models.Message_Type) is
      URI   : Swagger.Clients.URI_Type;
      Req   : Swagger.Clients.Request_Type;
      Reply : Swagger.Value_Type;
   begin
      Client.Set_Accept ((Swagger.Clients.APPLICATION_JSON,
                          Swagger.Clients.APPLICTION_JSON));
      Client.Initialize (Req, (1 => Swagger.Clients.APPLICATION_JSON));
      .Models.Serialize (Req.Stream, "", Cancel_Order_All_Request_Type);

      URI.Set_Path ("/v1/orders/cancel/all");
      Client.Call (Swagger.Clients.POST, URI, Req, Reply);
      .Models.Deserialize (Reply, "", Result);
   end V1_Orders_Cancel_All_Post;

   --  Cancel order request
   --  Request cancel for an existing order. The order can be canceled using the `client_order_id` or `exchange_order_id`.
   procedure V1_Orders_Cancel_Post
      (Client : in out Client_Type;
       Cancel_Order_Single_Request_Type : in .Models.CancelOrderSingleRequest_Type;
       Result : out .Models.OrderExecutionReport_Type) is
      URI   : Swagger.Clients.URI_Type;
      Req   : Swagger.Clients.Request_Type;
      Reply : Swagger.Value_Type;
   begin
      Client.Set_Accept ((Swagger.Clients.APPLICATION_JSON,
                          Swagger.Clients.APPLICTION_JSON));
      Client.Initialize (Req, (1 => Swagger.Clients.APPLICATION_JSON));
      .Models.Serialize (Req.Stream, "", Cancel_Order_Single_Request_Type);

      URI.Set_Path ("/v1/orders/cancel");
      Client.Call (Swagger.Clients.POST, URI, Req, Reply);
      .Models.Deserialize (Reply, "", Result);
   end V1_Orders_Cancel_Post;

   --  Get open orders
   --  Get last execution reports for open orders across all or single exchange.
   procedure V1_Orders_Get
      (Client : in out Client_Type;
       Exchange_Id : in Swagger.Nullable_UString;
       Result : out .Models.OrderExecutionReport_Type_Vectors.Vector) is
      URI   : Swagger.Clients.URI_Type;
      Reply : Swagger.Value_Type;
   begin
      Client.Set_Accept ((Swagger.Clients.APPLICATION_JSON,
                          Swagger.Clients.APPLICTION_JSON));

      URI.Add_Param ("exchange_id", Exchange_Id);
      URI.Set_Path ("/v1/orders");
      Client.Call (Swagger.Clients.GET, URI, Reply);
      .Models.Deserialize (Reply, "", Result);
   end V1_Orders_Get;

   --  Send new order
   --  This request creating new order for the specific exchange.
   procedure V1_Orders_Post
      (Client : in out Client_Type;
       New_Order_Single_Type : in .Models.NewOrderSingle_Type;
       Result : out .Models.OrderExecutionReport_Type) is
      URI   : Swagger.Clients.URI_Type;
      Req   : Swagger.Clients.Request_Type;
      Reply : Swagger.Value_Type;
   begin
      Client.Set_Accept ((Swagger.Clients.APPLICATION_JSON,
                          Swagger.Clients.APPLICTION_JSON));
      Client.Initialize (Req, (1 => Swagger.Clients.APPLICATION_JSON));
      .Models.Serialize (Req.Stream, "", New_Order_Single_Type);

      URI.Set_Path ("/v1/orders");
      Client.Call (Swagger.Clients.POST, URI, Req, Reply);
      .Models.Deserialize (Reply, "", Result);
   end V1_Orders_Post;

   --  Get order execution report
   --  Get the last order execution report for the specified order. The requested order does not need to be active or opened.
   procedure V1_Orders_Status_Client_Order_Id_Get
      (Client : in out Client_Type;
       Client_Order_Id : in Swagger.UString;
       Result : out .Models.OrderExecutionReport_Type) is
      URI   : Swagger.Clients.URI_Type;
      Reply : Swagger.Value_Type;
   begin
      Client.Set_Accept ((1 => Swagger.Clients.APPLICATION_JSON));

      URI.Set_Path ("/v1/orders/status/{client_order_id}");
      URI.Set_Path_Param ("client_order_id", Client_Order_Id);
      Client.Call (Swagger.Clients.GET, URI, Reply);
      .Models.Deserialize (Reply, "", Result);
   end V1_Orders_Status_Client_Order_Id_Get;

   --  Get open positions
   --  Get current open positions across all or single exchange.
   procedure V1_Positions_Get
      (Client : in out Client_Type;
       Exchange_Id : in Swagger.Nullable_UString;
       Result : out .Models.Position_Type_Vectors.Vector) is
      URI   : Swagger.Clients.URI_Type;
      Reply : Swagger.Value_Type;
   begin
      Client.Set_Accept ((Swagger.Clients.APPLICATION_JSON,
                          Swagger.Clients.APPLICTION_JSON));

      URI.Add_Param ("exchange_id", Exchange_Id);
      URI.Set_Path ("/v1/positions");
      Client.Call (Swagger.Clients.GET, URI, Reply);
      .Models.Deserialize (Reply, "", Result);
   end V1_Positions_Get;
end .Clients;
