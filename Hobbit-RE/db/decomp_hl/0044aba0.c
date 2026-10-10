
void __thiscall FUN_0044aba0(int param_1,int param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  iVar5 = param_2;
  iVar3 = FUN_004021c0(*(undefined4 *)(param_1 + 0x3a50),*(undefined4 *)(param_1 + 0x3a54));
  if (iVar3 != 0) {
    iVar3 = FUN_004c8970();
    iVar4 = 0;
    if (0 < param_2) {
      fVar2 = (float)param_2;
      do {
        local_4 = DAT_006e92e8 - (float)param_2 / fVar2;
        fVar1 = *(float *)(param_1 + 0x920);
        local_14 = fVar1 * param_3[1];
        local_10 = fVar1 * param_3[2];
        local_c = fVar1 * *param_3 * local_4;
        local_8 = local_14 * local_4;
        local_4 = local_10 * local_4;
        FUN_004c89c0(&local_c,iVar4);
        iVar4 = iVar4 + 1;
        param_2 = param_2 + -1;
      } while (iVar4 < iVar5);
    }
    if (iVar5 < iVar3) {
      iVar4 = iVar3 - iVar5;
      param_2 = 0;
      do {
        local_10 = DAT_006e92e8 - (float)param_2 / (float)iVar4;
        fVar2 = *(float *)(param_1 + 0x920);
        local_8 = fVar2 * param_3[1];
        local_4 = fVar2 * param_3[2];
        local_18 = fVar2 * *param_3 * local_10;
        local_14 = local_8 * local_10;
        local_10 = local_4 * local_10;
        FUN_004c89c0(&local_18,iVar5);
        iVar5 = iVar5 + 1;
        param_2 = param_2 + 1;
      } while (iVar5 < iVar3);
    }
  }
  return;
}

