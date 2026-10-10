
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005c2770(int *param_1,int param_2,int param_3,float param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  sVar1 = (short)param_1[3];
  while (sVar1 != -1) {
    iVar2 = (int)sVar1;
    iVar3 = iVar2 * 0x38 + *param_1;
    sVar1 = *(short *)(iVar3 + 0x28);
    if ((*(int *)(iVar2 * 0x38 + 0x30 + *param_1) == param_2) && (*(int *)(iVar3 + 0x34) == param_3)
       ) {
      *(float *)(iVar3 + 4) = param_4 + _DAT_006e99b0;
    }
  }
  return;
}

