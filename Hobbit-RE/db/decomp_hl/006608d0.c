
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006608d0(float param_1)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 local_600 [256];
  undefined2 auStack_400 [256];
  undefined2 auStack_200 [252];
  undefined4 uStack_8;
  
  if (param_1 < DAT_006e92e4 == (param_1 == DAT_006e92e4)) {
    if ((NAN(param_1) || NAN(DAT_006e92e8)) != (param_1 == DAT_006e92e8)) {
      FUN_00660a10();
      _DAT_007edb04 = 0;
      DAT_007edb00 = param_1;
      return;
    }
    iVar3 = 0;
    do {
      FUN_006c05f0();
      uVar2 = __ftol();
      local_600[iVar3] = uVar2;
      auStack_400[iVar3] = uVar2;
      auStack_200[iVar3] = uVar2;
      uVar1 = __ftol();
      (&DAT_007f0328)[iVar3] = uVar1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x100);
    if ((DAT_007f0464 == 0) && ((_DAT_007f0f1c & 0x20000) != 0)) {
      (**(code **)(*DAT_007f1000 + 0x48))(DAT_007f1000,0,local_600,iVar3);
      _DAT_007edb04 = 1;
      DAT_007edb00 = (float)uStack_8;
      return;
    }
    _DAT_007edb04 = 3;
    DAT_007edb00 = param_1;
  }
  return;
}

