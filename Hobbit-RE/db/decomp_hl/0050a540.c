
undefined4 __thiscall
FUN_0050a540(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_006a2400(param_2,param_3,param_4,param_5,param_6,param_7,0);
  uVar2 = FUN_006a3320(0);
  *(undefined4 *)(param_1 + 0x15c) = uVar2;
  FUN_006a2bd0(uVar2);
  uVar2 = FUN_006a3320(1);
  *(undefined4 *)(param_1 + 0x158) = uVar2;
  FUN_006a3e90(s_frame2_00731f80);
  FUN_00434ca0(0x18);
  uVar2 = __ftol();
  *(undefined4 *)(param_1 + 0x160) = uVar2;
  *(undefined4 *)(param_1 + 0x164) = 0;
  FUN_00434ca0(9);
  uVar2 = __ftol();
  *(undefined4 *)(param_1 + 0x168) = uVar2;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  FUN_00434ca0(0x19);
  uVar2 = __ftol();
  *(undefined4 *)(param_1 + 0x170) = uVar2;
  *(undefined4 *)(param_1 + 0x174) = 0;
  uVar2 = FUN_00436df0();
  *(undefined4 *)(param_1 + 0x178) = uVar2;
  *(undefined4 *)(param_1 + 0x17c) = 0;
  FUN_00434d10(0xb7,(float)(DAT_00763214 - *(int *)(param_1 + 0x160)));
  FUN_00434d10(0xb8,(float)(DAT_0076320c - *(int *)(param_1 + 0x168)));
  FUN_00434d10(0xb9,(float)(DAT_00763208 - *(int *)(param_1 + 0x170)));
  FUN_00434d10(0xba,(float)(DAT_00763210 - *(int *)(param_1 + 0x178)));
  *(undefined4 *)(param_1 + 0x184) = 0;
  *(undefined4 *)(param_1 + 0x188) = 0;
  *(undefined4 *)(param_1 + 0x18c) = 0;
  *(undefined4 *)(param_1 + 0x180) = 0x41700000;
  return uVar1;
}

