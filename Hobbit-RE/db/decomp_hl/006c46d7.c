
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_006c46d7(int param_1,int param_2,double param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  int iVar3;
  
  dVar1 = (double)CONCAT44(param_2,param_1);
  if ((double)CONCAT44(param_2,param_1) < _DAT_006fd548) {
    dVar1 = -dVar1;
  }
  dVar2 = _DAT_00758538;
  if (param_3._4_4_ == 0x7ff00000) {
    if (param_3._0_4_ != 0) {
LAB_006c4762:
      if (param_2 == 0x7ff00000) {
        if (param_1 != 0) {
          return 0;
        }
        if (_DAT_006fd548 < param_3) goto LAB_006c47fd;
        if (param_3 < _DAT_006fd548) goto LAB_006c4794;
      }
      else {
        if (param_2 != -0x100000) {
          return 0;
        }
        if (param_1 != 0) {
          return 0;
        }
        iVar3 = FUN_006c4807(param_3);
        if (_DAT_006fd548 < param_3) {
          dVar2 = _DAT_00758538;
          if (iVar3 == 1) {
            dVar2 = -_DAT_00758538;
          }
          goto LAB_006c47fd;
        }
        if (param_3 < _DAT_006fd548) {
          dVar2 = _DAT_00758558;
          if (iVar3 != 1) {
            dVar2 = 0.0;
          }
          goto LAB_006c47fd;
        }
      }
      dVar2 = 1.0;
      goto LAB_006c47fd;
    }
    if (_DAT_006fd4c0 < dVar1) goto LAB_006c47fd;
    if (_DAT_006fd4c0 <= dVar1) {
LAB_006c4727:
      *param_4 = _DAT_00758540;
      return 1;
    }
  }
  else {
    if ((param_3._4_4_ != -0x100000) || (param_3._0_4_ != 0)) goto LAB_006c4762;
    if (dVar1 <= _DAT_006fd4c0) {
      if (_DAT_006fd4c0 <= dVar1) goto LAB_006c4727;
      goto LAB_006c47fd;
    }
  }
LAB_006c4794:
  dVar2 = 0.0;
LAB_006c47fd:
  *param_4 = dVar2;
  return 0;
}

