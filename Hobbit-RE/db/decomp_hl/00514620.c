
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_00514620(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = FUN_006a2400(param_2,param_3,param_4,param_5,param_6,param_7,0);
  *(undefined4 *)(param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x188) = 0;
  uVar2 = FUN_006a3320(0);
  *(undefined4 *)(param_1 + 0x15c) = uVar2;
  uVar2 = FUN_006a3320(5);
  *(undefined4 *)(param_1 + 0x188) = uVar2;
  uVar2 = FUN_006a3320(1);
  *(undefined4 *)(param_1 + 0x160) = uVar2;
  uVar2 = FUN_006a3320(2);
  *(undefined4 *)(param_1 + 0x164) = uVar2;
  uVar2 = FUN_006a3320(3);
  *(undefined4 *)(param_1 + 0x168) = uVar2;
  uVar2 = FUN_006a3320(6);
  *(undefined4 *)(param_1 + 0x16c) = uVar2;
  uVar2 = FUN_006a3320(7);
  *(undefined4 *)(param_1 + 0x170) = uVar2;
  FUN_006a2bd0(*(undefined4 *)(param_1 + 0x15c));
  if ((DAT_007600ec == 0) && (*(int *)(param_1 + 0x16c) != 0)) {
    FUN_006a3240(0x100,1);
    FUN_006a3240(1,0);
    *(undefined4 *)(param_1 + 0x16c) = 0;
    FUN_006a3240(0x100,1);
    FUN_006a3240(1,0);
    *(undefined4 *)(param_1 + 0x170) = 0;
  }
  uVar2 = FUN_006a3320(4);
  *(undefined4 *)(param_1 + 0x184) = uVar2;
  *(undefined4 *)(param_1 + 0x17c) = 0;
  *(undefined4 *)(param_1 + 0x178) = 0;
  *(undefined2 *)(param_1 + 0x180) = 0;
  *(undefined4 *)(param_1 + 0x18c) = 0;
  *(undefined4 *)(param_1 + 0x174) = 0;
  FUN_00433c80();
  FUN_004f2440();
  FUN_0065af80(_DAT_00762ae4 * _DAT_006e9360);
  FUN_0065af40(DAT_00762ae0 * _DAT_006e9360);
  FUN_0065afc0(_DAT_00762ae8 * _DAT_006e9360);
  FUN_0052df20();
  iVar3 = FUN_0052e130();
  if (iVar3 == 0) {
    FUN_006a3240(0x100,1);
    FUN_006a3240(0x100,1);
  }
  return uVar1;
}

