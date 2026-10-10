
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006b78e0(int *param_1,int param_2,int param_3)

{
  float *pfVar1;
  float10 fVar2;
  
  FUN_006bad50(param_2,param_3);
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = *(int *)(param_2 + 0x8c);
  param_1[0x2e] = 1;
  param_1[0x2f] = 0;
  param_1[0x42] = *(int *)(param_2 + 0x88);
  param_3 = 0;
  if (0 < *(int *)(param_2 + 0x88)) {
    pfVar1 = (float *)(param_1 + 0x4c);
    do {
      pfVar1[-8] = 0.0;
      pfVar1[-9] = (float)param_3 * (float)param_1[0x2d];
      if ((NAN(*(float *)(param_2 + 0x94)) || NAN(*(float *)(param_2 + 0x98))) ==
          (*(float *)(param_2 + 0x94) == *(float *)(param_2 + 0x98))) {
        fVar2 = (float10)FUN_00647b30(0,0x40c90fdb);
      }
      else {
        fVar2 = (float10)*(float *)(param_2 + 0x94);
      }
      *pfVar1 = (float)fVar2;
      param_3 = param_3 + 1;
      pfVar1 = pfVar1 + 0x11;
    } while (param_3 < *(int *)(param_2 + 0x88));
  }
  (**(code **)(*param_1 + 0x20))();
  _DAT_00815ccc = 0xbf800000;
  return;
}

