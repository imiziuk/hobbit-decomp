
undefined4 FUN_0054cdd0(ushort *param_1,uint *param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int local_20;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d9820;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_SDBASE_SelectFunc_0073d02c);
  param_1 = (ushort *)((int)param_1 + 0x12);
  local_4 = 0;
  local_20 = 0;
  do {
    if ((*param_2 & 1 << ((byte)local_20 & 0x1f)) != 0) {
      uVar1 = *param_1;
      while (uVar2 = (uint)uVar1, uVar2 != 0xffff) {
        iVar4 = (uVar2 & 0x3ff) * 0xc;
        iVar3 = *(int *)(*(int *)(&DAT_007782dc + ((int)uVar2 >> 10) * 4) + 8 + iVar4);
        if (((((iVar3 != 0) && ((param_2[1] & *(uint *)(iVar3 + 0x10)) != 0)) &&
             (*(float *)(iVar3 + 0x44) <= (float)param_2[5])) &&
            ((*(float *)(iVar3 + 0x50) < (float)param_2[2] ==
              (NAN(*(float *)(iVar3 + 0x50)) || NAN((float)param_2[2])) &&
             (*(float *)(iVar3 + 0x4c) <= (float)param_2[7])))) &&
           ((*(float *)(iVar3 + 0x58) < (float)param_2[4] ==
             (NAN(*(float *)(iVar3 + 0x58)) || NAN((float)param_2[4])) &&
            ((*(float *)(iVar3 + 0x48) <= (float)param_2[6] &&
             (*(float *)(iVar3 + 0x54) < (float)param_2[3] ==
              (NAN(*(float *)(iVar3 + 0x54)) || NAN((float)param_2[3])))))))) {
          FUN_00649600(s_SDBASE_SelectFunc__pFunc_0073d010);
          local_4._0_1_ = 1;
          iVar3 = (*(code *)param_2[8])(param_2,iVar3);
          local_4 = (uint)local_4._1_3_ << 8;
          if (iVar3 == 0) {
            FUN_00649720();
            local_4 = 0xffffffff;
            FUN_00649720();
            ExceptionList = pvStack_c;
            return 0;
          }
          FUN_00649720();
        }
        uVar1 = *(ushort *)(*(int *)(&DAT_007782dc + ((int)uVar2 >> 10) * 4) + iVar4);
      }
    }
    local_20 = local_20 + 1;
    param_1 = param_1 + 1;
  } while (local_20 < 4);
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return 1;
}

