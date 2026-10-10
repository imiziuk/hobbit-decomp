
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0058e8c0(int param_1,float param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(int *)(param_1 + 900) != 0) {
    if ((DAT_00797ffc & 1) == 0) {
      DAT_00797ffc = DAT_00797ffc | 1;
      _DAT_00798480 = _DAT_006f4080;
    }
    _DAT_00798480 = _DAT_00798480 + param_2;
    if (_DAT_006f4080 <= _DAT_00798480) {
      local_8 = 0x43960000;
      local_4 = 0x43480000;
      FUN_0058e610(s_TestUIFX_00742260,&local_8,1);
      _DAT_00798480 = 0.0;
    }
  }
  iVar2 = 1;
  iVar3 = param_1 + 0x1c;
  do {
    if (((*(uint *)(param_1 + 0x380) & 1 << ((byte)iVar2 & 0x1f)) != 0) &&
       ((*(byte *)(iVar3 + 0x18) & 1) == 0)) {
      iVar1 = FUN_006b7690();
      if (iVar1 == 0) {
        if (_DAT_006e9350 < param_2) {
          FUN_006b7640(param_2);
        }
      }
      else {
        FUN_0058e6f0(iVar2);
      }
    }
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 0x1c;
  } while (iVar2 < 0x20);
  return;
}

