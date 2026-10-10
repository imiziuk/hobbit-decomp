
void __thiscall FUN_0068ac6b(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  
  pbVar2 = (byte *)(*(int *)(param_1 + 0x1048) * param_2 + *(int *)(param_1 + 0x104c) * param_3 +
                   *(int *)(param_1 + 0x18));
  pbVar3 = pbVar2 + *(int *)(param_1 + 0x1050);
  for (; pbVar2 < pbVar3; pbVar2 = pbVar2 + 1) {
    puVar4 = (undefined4 *)((*pbVar2 + 3) * 0x10 + param_1);
    *param_4 = *puVar4;
    param_4[1] = puVar4[1];
    puVar1 = param_4 + 3;
    param_4[2] = puVar4[2];
    param_4 = param_4 + 4;
    *puVar1 = puVar4[3];
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_00689244(param_4 + *(int *)(param_1 + 0x1050) * -4);
  }
  return;
}

