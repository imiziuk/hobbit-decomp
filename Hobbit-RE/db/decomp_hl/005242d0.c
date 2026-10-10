
undefined4 __thiscall
FUN_005242d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_006a2400(param_2,param_3,param_4,param_5,param_6,param_7,0);
  uVar2 = FUN_006a3320(0);
  *(undefined4 *)(param_1 + 0x1f0) = uVar2;
  uVar2 = FUN_006a3320(1);
  *(undefined4 *)(param_1 + 500) = uVar2;
  FUN_006a3e90(s_frame2_00731f80);
  FUN_006a2bd0(*(undefined4 *)(param_1 + 0x1f0));
  FUN_006a0410(DAT_00813038,0xffffffff);
  FUN_0052d740(1,6);
  return uVar1;
}

