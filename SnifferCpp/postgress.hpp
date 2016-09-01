#ifndef _POSTGRESS_H
#define _POSTGRESS_H

#include <libpq-fe.h>

void postgress_test();
void GetAllRecords(PGconn *conn, char* table_name);



int add_record(PGconn *conn, char* call_date, char* call_id, int result);
PGconn* postgress_connect();

#endif

