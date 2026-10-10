
void __thiscall FUN_00608a70(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  
  FUN_00608a20();
  pvVar2 = operator_new(param_2 * 0x30);
  param_1[1] = pvVar2;
  pvVar2 = operator_new(param_2 * 0x30);
  param_1[2] = pvVar2;
  pvVar2 = operator_new(param_2 * 0xc);
  param_1[0xd] = pvVar2;
  pvVar2 = operator_new(param_2 * 4);
  param_1[0xb] = pvVar2;
  pvVar2 = operator_new(param_2 * 4);
  param_1[0xc] = pvVar2;
  iVar6 = 0;
  param_1[0xf] = param_2;
  *param_1 = param_3;
  if (0 < param_2) {
    iVar5 = 0;
    iVar3 = 0;
    do {
      iVar1 = param_1[1];
      *(undefined4 *)(iVar1 + iVar3) = 0;
      *(undefined4 *)(iVar1 + 4 + iVar3) = 0;
      *(undefined4 *)(iVar1 + 8 + iVar3) = 0;
      iVar1 = param_1[2];
      *(undefined4 *)(iVar1 + iVar3) = 0;
      *(undefined4 *)(iVar1 + 4 + iVar3) = 0;
      *(undefined4 *)(iVar1 + 8 + iVar3) = 0;
      iVar1 = param_1[1];
      *(undefined4 *)(iVar1 + 0xc + iVar3) = 0;
      *(undefined4 *)(iVar1 + 0x10 + iVar3) = 0;
      *(undefined4 *)(iVar1 + 0x14 + iVar3) = 0;
      iVar1 = param_1[2];
      *(undefined4 *)(iVar1 + 0xc + iVar3) = 0;
      *(undefined4 *)(iVar1 + 0x10 + iVar3) = 0;
      *(undefined4 *)(iVar1 + 0x14 + iVar3) = 0;
      iVar1 = param_1[1];
      *(undefined4 *)(iVar1 + 0x18 + iVar3) = 0;
      *(undefined4 *)(iVar1 + 0x1c + iVar3) = 0;
      *(undefined4 *)(iVar1 + 0x20 + iVar3) = 0;
      iVar1 = param_1[2];
      *(undefined4 *)(iVar1 + 0x18 + iVar3) = 0;
      *(undefined4 *)(iVar1 + 0x1c + iVar3) = 0;
      *(undefined4 *)(iVar1 + 0x20 + iVar3) = 0;
      iVar1 = param_1[1];
      *(undefined4 *)(iVar1 + 0x24 + iVar3) = 0;
      *(undefined4 *)(iVar1 + 0x28 + iVar3) = 0;
      *(undefined4 *)(iVar1 + 0x2c + iVar3) = 0;
      puVar4 = (undefined4 *)(param_1[2] + 0x24 + iVar3);
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4 = (undefined4 *)(param_1[0xd] + iVar5);
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      *(undefined4 *)(param_1[0xb] + iVar6 * 4) = 0xffffffff;
      *(undefined4 *)(param_1[0xc] + iVar6 * 4) = 0xffffffff;
      iVar6 = iVar6 + 1;
      iVar3 = iVar3 + 0x30;
      iVar5 = iVar5 + 0xc;
    } while (iVar6 < (int)param_1[0xf]);
  }
  param_1[0xe] = 0x41800000;
  return;
}

