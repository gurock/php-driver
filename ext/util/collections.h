#ifndef PHP_CASSANDRA_UTIL_COLLECTIONS_H
#define PHP_CASSANDRA_UTIL_COLLECTIONS_H

int php_cassandra_validate_object(zval* object, zval* ztype TSRMLS_DC);
int php_cassandra_value_type(char* type, CassValueType* value_type TSRMLS_DC);

int php_cassandra_collection_from_set(cassandra_set* set, CassCollection** collection_ptr TSRMLS_DC);
int php_cassandra_collection_from_collection(cassandra_collection* coll, CassCollection** collection_ptr TSRMLS_DC);
int php_cassandra_collection_from_map(cassandra_map* map, CassCollection** collection_ptr TSRMLS_DC);

int php_cassandra_tuple_from_tuple(cassandra_tuple *tuple, CassTuple **output TSRMLS_DC);

int php_cassandra_user_type_from_udt(cassandra_udt *udt, CassUserType **output TSRMLS_DC);

#endif /* PHP_CASSANDRA_UTIL_COLLECTIONS_H */
