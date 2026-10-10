
void FUN_0064ef00(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,
                 undefined4 *param_9)

{
  if (DAT_007ce500 == 0) {
    DAT_007ce500 = FUN_0064ec80();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_007ce4e8);
  *param_1 = DAT_007ce504;
  *param_2 = DAT_007ce508;
  *param_3 = DAT_007ce50c;
  *param_4 = DAT_007ce510;
  *param_5 = DAT_007ce514;
  *param_6 = DAT_007ce518;
  *param_7 = DAT_007ce51c;
  *param_8 = DAT_007ce520;
  *param_9 = DAT_007ce524;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_007ce4e8);
  return;
}

