
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0043eec0(int param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00434c10();
  FUN_00434c40(4,(float)fVar1);
  FUN_00427270();
  if (*(int *)(param_1 + 0x6e4) == 0) {
    FUN_0043a3f0(6,s_C__projects_meridian_Support_Obj_00724060,0xb64);
    return;
  }
  if (_DAT_006e95a8 < *(float *)(param_1 + 0x610)) {
    fVar1 = (float10)FUN_0056b610(*(undefined4 *)(param_1 + 0x614));
    *(float *)(param_1 + 0x7ac) = (float)fVar1;
    if ((*(int *)(param_1 + 0x6f8) != 0) &&
       ((NAN(*(float *)(param_1 + 0x604)) || NAN(DAT_006e92e4)) !=
        (*(float *)(param_1 + 0x604) == DAT_006e92e4))) {
      *(undefined4 *)(param_1 + 0x610) = 0;
    }
  }
  return;
}

