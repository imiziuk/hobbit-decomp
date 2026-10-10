
float10 FUN_0064c6b0(float param_1,float param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float local_10;
  int local_c;
  float local_8;
  undefined1 local_4 [4];
  
  if (((DAT_006e92e4 < param_2) && (DAT_006e92e4 <= param_1)) &&
     (param_1 < param_2 != (NAN(param_1) || NAN(param_2)))) {
    return (float10)param_1;
  }
  if ((NAN(param_1) || NAN(DAT_006e92e4)) != (param_1 == DAT_006e92e4)) {
    return (float10)DAT_006e92e4;
  }
  if (param_2 < DAT_006e92e4 != (NAN(param_2) || NAN(DAT_006e92e4))) {
    param_2 = -param_2;
  }
  bVar1 = param_1 < DAT_006e92e4 != (NAN(param_1) || NAN(DAT_006e92e4));
  iVar2 = local_c;
  if (bVar1) {
    param_1 = -param_1;
  }
  do {
    local_c = iVar2;
    if (param_1 < param_2) {
      fVar4 = (float10)param_1;
      if (bVar1) {
        fVar4 = -fVar4;
      }
      return fVar4;
    }
    local_10 = param_2;
    local_8 = param_1;
    FUN_0064c520(&local_8,&local_c);
    FUN_0064c520(&local_10,local_4);
    iVar3 = local_c;
    FUN_0064c600(&local_10,local_c);
    iVar2 = local_c;
    while (-1 < iVar3) {
      if (local_10 <= param_1) {
        param_1 = param_1 - local_10;
        iVar2 = iVar3;
        break;
      }
      FUN_0064c600(&local_10,0xffffffff);
      iVar3 = iVar3 + -1;
      iVar2 = iVar3;
    }
  } while( true );
}

