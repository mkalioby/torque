#include "license_pbs.h" /* See here for the software license */
#ifndef _CNT2SERVER_CT_H
#define _CNT2SERVER_CT_H
#include <check.h>

#define CNT2SERVER_SUITE 1
Suite *cnt2server_suite();
#define METH_2 2
Suite *meth_2_suite();

int cnt2server_conf(long retry);

#endif /* _CNT2SERVER_CT_H */
