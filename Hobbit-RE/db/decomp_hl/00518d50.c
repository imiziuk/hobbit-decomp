
undefined4 __thiscall
FUN_00518d50(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  
  uVar1 = FUN_006a2400(param_2,param_3,param_4,param_5,param_6,param_7,0);
  puVar5 = (undefined4 *)(param_1 + 0x160);
  for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  uVar2 = FUN_006a3320(0);
  *(undefined4 *)(param_1 + 0x164) = uVar2;
  uVar2 = FUN_006a3320(1);
  *(undefined4 *)(param_1 + 0x168) = uVar2;
  uVar2 = FUN_006a3320(2);
  *(undefined4 *)(param_1 + 0x16c) = uVar2;
  uVar2 = FUN_006a3320(3);
  *(undefined4 *)(param_1 + 0x170) = uVar2;
  uVar2 = FUN_006a3320(4);
  *(undefined4 *)(param_1 + 0x174) = uVar2;
  uVar2 = FUN_006a3320(5);
  *(undefined4 *)(param_1 + 0x178) = uVar2;
  uVar2 = FUN_006a3320(6);
  *(undefined4 *)(param_1 + 0x17c) = uVar2;
  uVar2 = FUN_006a3320(7);
  *(undefined4 *)(param_1 + 0x180) = uVar2;
  *(undefined4 *)(param_1 + 0x15c) = 0;
  if (DAT_00760110 == 0) {
    *(undefined4 *)(param_1 + 0x158) = 0;
    FUN_006a3240(1,1);
    FUN_006a3240(0x100,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x158) = 0xffffffff;
    DAT_00760110 = 0;
  }
  pcVar6 = "02_Exit_Screen_demo.xbmp";
  iVar4 = param_1 + 0x184;
  do {
    uVar2 = FUN_005496c0(pcVar6,s_FrontEnd_007345ac);
    iVar3 = FUN_00652870(uVar2);
    if (iVar3 != 0) {
      FUN_00674c70(iVar4);
    }
    pcVar6 = pcVar6 + 0x20;
    iVar4 = iVar4 + 0x20;
  } while ((int)pcVar6 < 0x6f3118);
  *(undefined4 *)(param_1 + 0x204) = 0;
  *(undefined4 *)(param_1 + 0x208) = 0;
  *(undefined4 *)(param_1 + 0x20c) = 0;
  FUN_0064cc00();
  return uVar1;
}

