
void FUN_005895a0(undefined4 *param_1,float param_2)

{
  float *pfVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  float fVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  byte local_3d;
  uint local_3c;
  float local_38;
  uint local_34;
  float local_30;
  float fStack_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  
  puVar3 = param_1;
  if (DAT_006e92e4 <= param_2) {
    if (DAT_006e92e8 < param_2 != (NAN(DAT_006e92e8) || NAN(param_2))) {
      param_2 = 1.0;
      goto LAB_005895e8;
    }
    if (DAT_006e92e4 <= param_2) goto LAB_005895e8;
  }
  param_2 = 0.0;
LAB_005895e8:
  switch(*param_1) {
  case 0:
    break;
  case 1:
    FUN_005890f0(&local_3d,1);
    FUN_005890f0(&param_1,1);
    if (param_2 < DAT_006e92e8 == (NAN(param_2) || NAN(DAT_006e92e8))) {
      *(char *)puVar3[1] = (char)param_1;
      return;
    }
    local_38 = (float)(uint)local_3d;
    param_1 = (undefined4 *)(((uint)param_1 & 0xff) - (int)local_38);
    uVar5 = __ftol();
    *(undefined1 *)puVar3[1] = uVar5;
    return;
  case 2:
    FUN_005890f0(&param_1,2);
    FUN_005890f0(&local_38,2);
    if (param_2 < DAT_006e92e8 == (NAN(param_2) || NAN(DAT_006e92e8))) {
      *(short *)puVar3[1] = local_38._0_2_;
      return;
    }
    local_3c = (uint)(short)param_1;
    param_1 = (undefined4 *)((int)local_38._0_2_ - local_3c);
    uVar6 = __ftol();
    *(undefined2 *)puVar3[1] = uVar6;
    return;
  case 3:
    FUN_005890f0(&param_1,2);
    FUN_005890f0(&local_38,2);
    if (param_2 < DAT_006e92e8 == (NAN(param_2) || NAN(DAT_006e92e8))) {
      *(short *)puVar3[1] = SUB42(local_38,0);
      return;
    }
    local_3c = (uint)param_1 & 0xffff;
    param_1 = (undefined4 *)(((uint)local_38 & 0xffff) - local_3c);
    uVar6 = __ftol();
    *(undefined2 *)puVar3[1] = uVar6;
    return;
  case 4:
    FUN_005890f0(&param_1,4);
    FUN_005890f0(&local_38,4);
    if (param_2 < DAT_006e92e8 == (NAN(param_2) || NAN(DAT_006e92e8))) {
      *(float *)puVar3[1] = local_38;
      return;
    }
    local_38 = (float)((int)local_38 - (int)param_1);
    uVar7 = __ftol();
    *(undefined4 *)puVar3[1] = uVar7;
    return;
  case 5:
    FUN_005890f0(&local_38,4);
    FUN_005890f0(&param_1,4);
    if (param_2 < DAT_006e92e8 == (NAN(param_2) || NAN(DAT_006e92e8))) {
      *(undefined4 **)puVar3[1] = param_1;
      return;
    }
    local_30 = local_38;
    fStack_2c = 0.0;
    uVar7 = __ftol();
    *(undefined4 *)puVar3[1] = uVar7;
    return;
  case 6:
    FUN_005890f0(&param_1,4);
    FUN_005890f0(&local_38,4);
    if (param_2 < DAT_006e92e8 != (NAN(param_2) || NAN(DAT_006e92e8))) {
      local_38 = (local_38 - (float)param_1) * param_2 + (float)param_1;
    }
    *(float *)puVar3[1] = local_38;
    return;
  case 7:
    FUN_005890f0(&local_30,0xc);
    FUN_005890f0(&local_24,0xc);
    pfVar1 = (float *)puVar3[1];
    *pfVar1 = (local_24 - local_30) * param_2 + local_30;
    pfVar1[2] = (local_1c - local_28) * param_2 + local_28;
    pfVar1[1] = (local_20 - fStack_2c) * param_2 + fStack_2c;
    return;
  case 8:
    FUN_005890f0(&local_38,4);
    FUN_005890f0(&local_3c,4);
    fVar4 = local_38;
    local_34 = (uint)local_38 >> 0x10 & 0xff;
    param_1 = (undefined4 *)((local_3c >> 0x10 & 0xff) - local_34);
    uVar5 = __ftol();
    param_1._0_3_ = CONCAT12(uVar5,(short)param_1);
    local_30 = (float)((uint)local_38 >> 8 & 0xff);
    local_34 = (local_3c >> 8 & 0xff) - (int)local_30;
    uVar5 = __ftol();
    param_1._0_2_ = CONCAT11(uVar5,(char)param_1);
    local_34 = (uint)local_38 & 0xff;
    local_30 = (float)((local_3c & 0xff) - local_34);
    uVar5 = __ftol();
    param_1 = (undefined4 *)CONCAT31(param_1._1_3_,uVar5);
    local_34 = (uint)fVar4 >> 0x18;
    local_30 = (float)((local_3c >> 0x18) - local_34);
    uVar5 = __ftol();
    puVar2 = (undefined1 *)puVar3[1];
    puVar2[3] = uVar5;
    puVar2[2] = param_1._2_1_;
    puVar2[1] = param_1._1_1_;
    *puVar2 = (char)param_1;
  default:
    return;
  }
  FUN_005890f0(&local_3d,1);
  FUN_005890f0(&param_1,1);
  if (param_2 < DAT_006e92e8 == (NAN(param_2) || NAN(DAT_006e92e8))) {
    *(char *)puVar3[1] = (char)param_1;
    return;
  }
  local_38 = (float)(int)(char)local_3d;
  param_1 = (undefined4 *)((int)(char)param_1 - (int)local_38);
  uVar5 = __ftol();
  *(undefined1 *)puVar3[1] = uVar5;
  return;
}

