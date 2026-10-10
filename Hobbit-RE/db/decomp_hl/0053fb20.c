
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0053fb20(int param_1,int param_2,uint param_3,int param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  int local_2c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d92aa;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_anim_keys__GetRawKeys_00737b6c);
  iVar5 = (int)param_3 >> 5;
  param_3 = param_3 & 0x1f;
  local_4 = 0;
  if ((iVar5 == *(short *)(param_1 + 6)) && (param_3 == 0)) {
    iVar5 = iVar5 + -1;
    param_3 = 0x20;
  }
  sVar1 = *(short *)(param_1 + 8);
  iVar2 = *(int *)(param_2 + 0x74);
  iVar3 = FUN_0053f540(param_2);
  local_2c = 0;
  if (0 < *(short *)(param_1 + 2)) {
    pfVar7 = (float *)(param_4 + 0x14);
    do {
      iVar4 = *(int *)(iVar2 + (sVar1 + iVar5) * 0x18 + 0x14);
      DAT_007670ac = *(uint *)(iVar3 + local_2c * 4) >> 0x1e;
      DAT_007670a0 = *(uint *)(iVar3 + local_2c * 4) >> 0x1c & 3;
      DAT_007670b0 = *(uint *)(iVar3 + local_2c * 4) >> 0x1a & 3;
      DAT_007670b4 = *(uint *)(iVar3 + local_2c * 4) & 0x3ffff;
      DAT_0076709c = *(int *)(&DAT_00737aa8 + DAT_007670ac * 4) * iVar4 +
                     *(int *)(&DAT_00737a98 + DAT_007670ac * 4) + DAT_007670b4;
      DAT_007670a8 = *(int *)(&DAT_00737ac8 + DAT_007670a0 * 4) * iVar4 +
                     *(int *)(&DAT_00737ab8 + DAT_007670a0 * 4) + DAT_0076709c;
      DAT_007670a4 = iVar3;
      if (DAT_007670ac == 0) {
        pfVar7[-5] = 1.0;
        pfVar7[-4] = 1.0;
        pfVar7[-3] = 1.0;
      }
      else if (DAT_007670ac == 1) {
        iVar4 = DAT_007670b4 + iVar3;
        pfVar7[-5] = *(float *)(DAT_007670b4 + iVar3);
        pfVar7[-4] = *(float *)(iVar4 + 4);
        pfVar7[-3] = *(float *)(iVar4 + 8);
      }
      else if (DAT_007670ac == 3) {
        iVar4 = DAT_007670b4 + param_3 * 0xc;
        iVar6 = iVar4 + iVar3;
        pfVar7[-5] = *(float *)(iVar4 + iVar3);
        pfVar7[-4] = *(float *)(iVar6 + 4);
        pfVar7[-3] = *(float *)(iVar6 + 8);
      }
      if (DAT_007670a0 == 0) {
        pfVar7[-2] = 0.0;
        pfVar7[-1] = 0.0;
        *pfVar7 = 0.0;
        pfVar7[1] = 1.0;
      }
      else if (DAT_007670a0 == 1) {
        iVar4 = DAT_0076709c + DAT_007670a4;
        pfVar7[-2] = *(float *)(DAT_0076709c + DAT_007670a4);
        pfVar7[-1] = *(float *)(iVar4 + 4);
        *pfVar7 = *(float *)(iVar4 + 8);
        pfVar7[1] = *(float *)(iVar4 + 0xc);
      }
      else if (DAT_007670a0 == 2) {
        iVar4 = DAT_007670a4 + param_3 * 8;
        iVar6 = iVar4 + DAT_0076709c;
        pfVar7[-2] = (float)*(ushort *)(iVar4 + DAT_0076709c) * _DAT_006f3bf0 - DAT_006e92e8;
        pfVar7[-1] = (float)*(ushort *)(iVar6 + 2) * _DAT_006f3bf0 - DAT_006e92e8;
        *pfVar7 = (float)*(ushort *)(iVar6 + 4) * _DAT_006f3bf0 - DAT_006e92e8;
        pfVar7[1] = (float)*(ushort *)(iVar6 + 6) * _DAT_006f3bf0 - DAT_006e92e8;
      }
      else if (DAT_007670a0 == 3) {
        FUN_0042fda0(param_3 * 0x10 + DAT_007670a4 + DAT_0076709c);
      }
      if (DAT_007670b0 == 0) {
        iVar4 = FUN_00401f00(0,0,0);
LAB_0053fdff:
        FUN_004357e0(iVar4);
      }
      else {
        if (DAT_007670b0 == 1) {
          iVar4 = DAT_007670a4 + DAT_007670a8;
          goto LAB_0053fdff;
        }
        if (DAT_007670b0 == 3) {
          iVar4 = DAT_007670a4 + param_3 * 0xc + DAT_007670a8;
          goto LAB_0053fdff;
        }
      }
      local_2c = local_2c + 1;
      pfVar7 = pfVar7 + 10;
    } while (local_2c < *(short *)(param_1 + 2));
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

