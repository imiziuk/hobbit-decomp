
void __fastcall FUN_0043ecc0(int param_1)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  
  if (*(int *)(param_1 + 0x9d0) == 0) {
    iVar2 = FUN_00467eb0();
    if (iVar2 != 0) {
      FUN_0043a3f0(0x26,s_C__projects_meridian_Support_Obj_00724060,0xaf9);
      return;
    }
  }
  if (*(int *)(param_1 + 0x400) != 0) {
    FUN_0043a3f0(0x19,s_C__projects_meridian_Support_Obj_00724060,0xb00);
    return;
  }
  if (*(int *)(param_1 + 0x640) != 0) {
    iVar2 = FUN_00422510();
    if (iVar2 != 0) {
      FUN_00422590();
    }
  }
  iVar2 = FUN_0042fb20();
  if (iVar2 != 0) {
    FUN_0043a3f0(0xc,s_C__projects_meridian_Support_Obj_00724060,0xb12);
    return;
  }
  if ((((*(int *)(param_1 + 0x9d0) == 0) &&
       (*(float *)(*(int *)(param_1 + 0x450) + 0x18) < *(float *)(param_1 + 0x610))) &&
      (*(int *)(param_1 + 0x644) == 0)) && (*(int *)(param_1 + 0x8dc) != 0x17)) {
    FUN_0043a3f0(3,s_C__projects_meridian_Support_Obj_00724060,0xb24);
    return;
  }
  if (((*(int *)(param_1 + 0x658) == 0) || (*(int *)(param_1 + 0x9d0) != 0)) ||
     (*(int *)(param_1 + 0x8dc) == 0x17)) {
    if ((0 < *(int *)(param_1 + 0x534)) ||
       (fVar1 = (float)(*(int *)(param_1 + 0x52c) + -2),
       fVar1 < *(float *)(param_1 + 0x530) != (fVar1 == *(float *)(param_1 + 0x530)))) {
      FUN_0043a3f0(1,s_C__projects_meridian_Support_Obj_00724060,0xb3b);
    }
  }
  else {
    if ((*(int *)(param_1 + 0x3d0) != 0) || (*(int *)(param_1 + 0x3c0) != 0)) {
      FUN_0043a3f0(0x10,s_C__projects_meridian_Support_Obj_00724060,0xb2e);
      return;
    }
    if (*(int *)(param_1 + 0x3b0) != 0) {
      fVar3 = (float10)FUN_00434ca0(2);
      if ((NAN(fVar3) || NAN((float10)DAT_006e92e4)) == (fVar3 == (float10)DAT_006e92e4)) {
        FUN_0043a3f0(0x14,s_C__projects_meridian_Support_Obj_00724060,0xb32);
        return;
      }
    }
  }
  return;
}

