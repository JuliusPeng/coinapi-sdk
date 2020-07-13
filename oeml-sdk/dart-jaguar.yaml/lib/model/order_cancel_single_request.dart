import 'package:jaguar_serializer/jaguar_serializer.dart';


part 'order_cancel_single_request.jser.dart';

class OrderCancelSingleRequest {
   /* Exchange name */
  @Alias('exchange_id', isNullable: false,  )
  final String exchangeId;
   /* Order Id */
  @Alias('exchange_order_id', isNullable: false,  )
  final String exchangeOrderId;
   /* Client order Id */
  @Alias('client_order_id', isNullable: false,  )
  final String clientOrderId;
  

  OrderCancelSingleRequest(
      

{
     this.exchangeId = null,  
     this.exchangeOrderId = null,  
     this.clientOrderId = null 
    
    }
  );

  @override
  String toString() {
    return 'OrderCancelSingleRequest[exchangeId=$exchangeId, exchangeOrderId=$exchangeOrderId, clientOrderId=$clientOrderId, ]';
  }
}

@GenSerializer(nullableFields: true)
class OrderCancelSingleRequestSerializer extends Serializer<OrderCancelSingleRequest> with _$OrderCancelSingleRequestSerializer {

}
