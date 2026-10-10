
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006b79b0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_005a3d00();
  if ((NAN(fVar1) || NAN((float10)_DAT_00815ccc)) == (fVar1 == (float10)_DAT_00815ccc)) {
    (**(code **)(*param_1 + 0x20))();
  }
  _DAT_00815ccc = (float)fVar1;
  (**(code **)(*param_1 + 0x18))(param_2,param_3);
  (**(code **)(*param_1 + 0x1c))(param_2,param_3);
  return;
}

