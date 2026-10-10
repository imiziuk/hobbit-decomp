
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_006aa030(int param_1,float *param_2,int **param_3,int *param_4,undefined4 param_5)

{
  float fVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *unaff_EBX;
  int unaff_EBP;
  int iStack_c0;
  undefined4 **ppuStack_bc;
  float *pfStack_b8;
  int iStack_b4;
  int iStack_b0;
  undefined4 **ppuStack_ac;
  float *pfStack_a8;
  float *pfStack_a4;
  int *piStack_a0;
  int *piStack_9c;
  float *pfStack_98;
  float *pfStack_94;
  undefined4 *puStack_90;
  int *local_8c;
  int local_78;
  float local_68 [2];
  int local_60;
  undefined4 local_5c;
  int local_58 [5];
  undefined4 uStack_44;
  undefined4 uStack_38;
  int iStack_2c;
  float *local_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e8068;
  local_c = ExceptionList;
  local_8c = param_4;
  puStack_90 = (undefined4 *)0x6aa05f;
  ExceptionList = &local_c;
  FUN_0064b170();
  bVar2 = (byte)param_5;
  local_4 = 0;
  if (param_3 == (int **)0x1) {
    param_5._3_1_ = 0xff;
    param_5._2_1_ = 0;
    param_5._1_1_ = 0xff;
    param_5._0_1_ = 0;
  }
  else if ((param_5._2_1_ == param_5._1_1_) && (param_5._2_1_ == (byte)param_5)) {
    param_4 = (int *)(uint)param_5._1_1_;
    local_8c = (int *)0x6aa0ca;
    param_5._1_1_ = __ftol();
    param_4 = (int *)(uint)bVar2;
    local_8c = (int *)0x6aa0ee;
    param_5._0_1_ = __ftol();
  }
  bVar2 = (byte)param_5;
  local_8c = local_58;
  puStack_90 = &param_3;
  pfStack_94 = (float *)0x6aa10b;
  FUN_006a8ed0();
  if (param_3 != (int **)0x3) {
    if (param_3 == (int **)0x1) {
      switch(*(undefined2 *)(local_58[0] + 2)) {
      case 0x44:
        iVar3 = 7;
        break;
      default:
        goto switchD_006aa13f_caseD_45;
      case 0x4c:
        iVar3 = 8;
        break;
      case 0x50:
        iVar3 = 0x11;
        break;
      case 0x51:
        iVar3 = 0x10;
        break;
      case 0x52:
        iVar3 = 9;
        break;
      case 0x53:
        iVar3 = 10;
        break;
      case 0x58:
        iVar3 = 0xf;
        break;
      case 0x61:
        iVar3 = 0;
        break;
      case 0x62:
        iVar3 = 1;
        break;
      case 99:
        iVar3 = 2;
        break;
      case 100:
        iVar3 = 3;
        break;
      case 0x6c:
        iVar3 = 4;
        break;
      case 0x70:
        iVar3 = 0x12;
        break;
      case 0x72:
        iVar3 = 5;
        break;
      case 0x73:
        iVar3 = 0xb;
        break;
      case 0x75:
        iVar3 = 6;
        break;
      case 0x78:
        iVar3 = 0xc;
        break;
      case 0x79:
        iVar3 = 0xd;
        break;
      case 0x7a:
        iVar3 = 0xe;
      }
      local_8c = (int *)0x17;
      puStack_90 = (undefined4 *)0x7;
      pfStack_94 = (float *)0x6aa1cf;
      FUN_0066c3a0();
      pfStack_98 = (float *)(iVar3 * 0x20 + DAT_0081303c + 0x110);
      pfStack_94 = (float *)0x0;
      piStack_9c = (int *)0x6aa1e7;
      FUN_0066db80();
      param_3 = &local_8c;
      puStack_90 = (undefined4 *)0x41900000;
      pfStack_94 = (float *)0x41900000;
      local_8c = (int *)CONCAT31(CONCAT21(CONCAT11(param_5._3_1_,param_5._2_1_),param_5._1_1_),bVar2
                                );
      pfStack_98 = (float *)0x6aa226;
      puStack_90 = (undefined4 *)FUN_0041b9c0();
      pfStack_94 = param_2;
      pfStack_98 = (float *)0x6aa234;
      FUN_0066e5a0();
      local_8c = (int *)0x6aa23c;
      FUN_0066d9a0();
      fVar1 = *param_2 + _DAT_006e99e4;
      local_14 = param_2;
    }
    else {
      local_8c = (int *)0x1;
      puStack_90 = (undefined4 *)0x6aa250;
      FUN_0065bb10();
      piStack_a0 = *(int **)(param_1 + 0x54);
      local_8c = (int *)0x0;
      puStack_90 = (undefined4 *)0x420;
      pfStack_94 = local_68;
      pfStack_98 = local_14;
      piStack_9c = (int *)local_58[0];
      local_68[0] = 0.0;
      local_68[1] = 0.0;
      local_60 = 0;
      local_5c = 0;
      pfStack_a4 = (float *)0x6aa284;
      (**(code **)(*piStack_a0 + 0x1c))();
      uStack_10 = 0x80000000;
      if (puStack_8 != (undefined1 *)0xff000000) {
        pfStack_a4 = (float *)0x6aa2eb;
        local_8c = unaff_EBX;
        iVar3 = __ftol();
        pfStack_a4 = (float *)0x6aa2fa;
        iVar4 = __ftol();
        puStack_90 = (undefined4 *)(iVar4 + unaff_EBP);
        pfStack_a4 = (float *)0x80000000;
        pfStack_a8 = (float *)0x120;
        ppuStack_ac = &puStack_90;
        iStack_b0 = iStack_2c;
        local_8c = (int *)((int)local_8c + iVar3);
        pfStack_b8 = *(float **)(param_1 + 0x54);
        ppuStack_bc = (undefined4 **)0x6aa344;
        (**(code **)((int)*pfStack_b8 + 0x1c))();
        pfStack_a8 = pfStack_98;
        pfStack_a4 = pfStack_94;
        piStack_a0 = puStack_90;
        piStack_9c = local_8c;
        ppuStack_bc = (undefined4 **)0x6aa372;
        iVar3 = __ftol();
        ppuStack_bc = (undefined4 **)0x6aa37b;
        iVar5 = __ftol();
        pfStack_a8 = (float *)(iVar5 + (int)pfStack_98);
        piStack_a0 = (int *)((int)piStack_a0 + iVar5);
        ppuStack_bc = (undefined4 **)0x80000000;
        iStack_c0 = 0x120;
        piStack_9c = (int *)((int)piStack_9c + iVar3);
        pfStack_a4 = (float *)((int)pfStack_a4 + iVar3);
        (**(code **)(**(int **)(param_1 + 0x54) + 0x1c))
                  (*(int **)(param_1 + 0x54),local_78 + iVar4,uStack_44,&pfStack_a8);
      }
      pfStack_a4 = (float *)0x6aa3ed;
      local_8c = unaff_EBX;
      iVar3 = __ftol();
      pfStack_a4 = (float *)0x6aa3fc;
      iVar4 = __ftol();
      puStack_90 = (undefined4 *)(iVar4 + unaff_EBP);
      pfStack_a4 = (float *)0x80000000;
      pfStack_a8 = (float *)0x120;
      ppuStack_ac = &puStack_90;
      iStack_b0 = iStack_2c;
      local_8c = (int *)((int)local_8c + iVar3);
      pfStack_b8 = *(float **)(param_1 + 0x54);
      ppuStack_bc = (undefined4 **)0x6aa446;
      (**(code **)((int)*pfStack_b8 + 0x1c))();
      pfStack_a8 = pfStack_98;
      pfStack_a4 = pfStack_94;
      piStack_a0 = puStack_90;
      piStack_9c = local_8c;
      ppuStack_bc = (undefined4 **)0x6aa474;
      iVar3 = __ftol();
      ppuStack_bc = (undefined4 **)0x6aa47d;
      iVar5 = __ftol();
      pfStack_a8 = (float *)(iVar5 + (int)pfStack_98);
      piStack_a0 = (int *)((int)piStack_a0 + iVar5);
      ppuStack_bc = (undefined4 **)0x80000000;
      iStack_c0 = 0x120;
      piStack_9c = (int *)((int)piStack_9c + iVar3);
      pfStack_a4 = (float *)((int)pfStack_a4 + iVar3);
      (**(code **)(**(int **)(param_1 + 0x54) + 0x1c))
                (*(int **)(param_1 + 0x54),local_78 + iVar4,uStack_44,&pfStack_a8);
      iVar3 = iStack_b0;
      iStack_c0 = iStack_b0;
      ppuStack_bc = ppuStack_ac;
      pfStack_b8 = pfStack_a8;
      iStack_b4 = (int)pfStack_a4;
      iVar4 = __ftol();
      iVar5 = __ftol();
      iStack_c0 = iVar5 + iVar3;
      pfStack_b8 = (float *)((int)pfStack_b8 + iVar5);
      ppuStack_bc = (undefined4 **)((int)ppuStack_bc + iVar4);
      iStack_b4 = iStack_b4 + iVar4;
      (**(code **)(**(int **)(param_1 + 0x54) + 0x1c))
                (*(int **)(param_1 + 0x54),piStack_a0,local_5c,&iStack_c0,0x120,uStack_38);
      fVar1 = (float)local_60 + *local_14;
    }
    *local_14 = fVar1;
  }
switchD_006aa13f_caseD_45:
  local_4 = 0xffffffff;
  local_8c = (int *)0x6aa558;
  FUN_0064b190();
  ExceptionList = local_c;
  return;
}

