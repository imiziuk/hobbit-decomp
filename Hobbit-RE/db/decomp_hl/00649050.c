
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00649050(void)

{
  longlong lVar1;
  int iVar2;
  float10 fVar3;
  
  if (DAT_007ccf50 != 0) {
    FUN_00648f70(1);
    DAT_007ccf50 = 0;
  }
  if (DAT_007ccf54 != 0) {
    FUN_00648f70(0);
    DAT_007ccf54 = 0;
  }
  if (DAT_007ccf58 != 0) {
    FUN_00648fd0(&DAT_007ccf5c);
    DAT_007ccf58 = 0;
  }
  iVar2 = DAT_007ccf2c;
  _DAT_0074c640 = 1;
  _DAT_0074c638 = FUN_0064cb70();
  _DAT_0074c638 = _DAT_0074c638 - CONCAT44(_DAT_007ccfec,_DAT_007ccfe8);
  lVar1 = _DAT_0074c638;
  if (DAT_007ccfb0 == 0) {
    fVar3 = (float10)FUN_0064cbb0(_DAT_0074c638);
    lVar1 = _DAT_0074c638;
    if ((float10)_DAT_007ccfa0 < fVar3) {
      _DAT_007ccfe4 = 0;
      DAT_007ccfb0 = 1;
      goto LAB_00649102;
    }
  }
  _DAT_0074c63c = (undefined4)((ulonglong)lVar1 >> 0x20);
  _DAT_0074c638 = (undefined4)lVar1;
  _DAT_007ccfe4 = _DAT_007ccfe4 + -1;
  if (-1 < _DAT_007ccfe4) {
    _DAT_0074c638 = lVar1;
    return;
  }
  _DAT_007ccfe4 = DAT_007ccfa8;
  DAT_007ccfb0 = 0;
  if (iVar2 == 0) {
    return;
  }
LAB_00649102:
  _DAT_0074c638 = lVar1;
  FUN_00649350(&PTR_s_GLOBAL_0074c628);
  if (DAT_007ccf34 != 0) {
    FUN_00649200(&PTR_s_GLOBAL_0074c628);
    FUN_0064e870(7,&DAT_0074c726);
    FUN_0064e870(7,s_____________nCalls__TotalMs___In_0074c728);
    FUN_006493a0(&PTR_s_GLOBAL_0074c628,0);
  }
  lVar1 = _DAT_0074c638;
  if (DAT_007ccf30 != 0) {
    FUN_0064e870(7,&DAT_0074c76a);
    FUN_0064e870(7,s__________TotalMs___InFunct___InC_0074c770);
    FUN_006492f0(&PTR_s_GLOBAL_0074c628);
    FUN_00649200(&PTR_s_GLOBAL_0074c628);
    FUN_00649510(&PTR_s_GLOBAL_0074c628);
    FUN_0064e870(7,s__________________________________0074c7b8);
    FUN_0064e870(7,s_nNodes____d_0074c7fc,DAT_007ccfe0);
    FUN_0064e870(7,s_MemUsed____d_0074c80c,DAT_007ccfe0 * 0x50);
    FUN_0064e870(7,s__________________________________0074c820);
    lVar1 = _DAT_0074c638;
  }
  _DAT_0074c63c = (undefined4)((ulonglong)lVar1 >> 0x20);
  _DAT_0074c638 = (undefined4)lVar1;
  return;
}

