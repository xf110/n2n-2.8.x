#ifndef LIBLFDS711_H

  /***** defines *****/
  #define LIBLFDS711_H

  /***** pragmas on *****/
  #pragma warning( push )
  #pragma warning( disable : 4324 )                                          // TRD : 4324 disables MSVC warnings for structure alignment padding due to alignment specifiers
  #pragma prefast( disable : 28113 28182 28183, "blah" )

  /***** includes *****/
  #include "../thirdparty/liblfds711/inc/liblfds711/lfds711_porting_abstraction_layer_compiler.h"
  #include "../thirdparty/liblfds711/inc/liblfds711/lfds711_porting_abstraction_layer_operating_system.h"
  #include "../thirdparty/liblfds711/inc/liblfds711/lfds711_porting_abstraction_layer_processor.h"

  #include "../thirdparty/liblfds711/inc/liblfds711/lfds711_prng.h"                                       // TRD : misc requires prng
  #include "../thirdparty/liblfds711/inc/liblfds711/lfds711_misc.h"                                       // TRD : everything after depends on misc
  #include "../thirdparty/liblfds711/inc/liblfds711/lfds711_btree_addonly_unbalanced.h"                   // TRD : hash_addonly depends on btree_addonly_unbalanced
  #include "../thirdparty/liblfds711/inc/liblfds711/lfds711_freelist.h"
  #include "../thirdparty/liblfds711/inc/liblfds711/lfds711_hash_addonly.h"
  #include "../thirdparty/liblfds711/inc/liblfds711/lfds711_list_addonly_singlylinked_ordered.h"
  #include "../thirdparty/liblfds711/inc/liblfds711/lfds711_list_addonly_singlylinked_unordered.h"
  #include "../thirdparty/liblfds711/inc/liblfds711/lfds711_queue_bounded_manyproducer_manyconsumer.h"
  #include "../thirdparty/liblfds711/inc/liblfds711/lfds711_queue_bounded_singleproducer_singleconsumer.h"
  #include "../thirdparty/liblfds711/inc/liblfds711/lfds711_queue_unbounded_manyproducer_manyconsumer.h"
  #include "../thirdparty/liblfds711/inc/liblfds711/lfds711_ringbuffer.h"
  #include "../thirdparty/liblfds711/inc/liblfds711/lfds711_stack.h"

  /***** pragmas off *****/
  #pragma warning( pop )

#endif

