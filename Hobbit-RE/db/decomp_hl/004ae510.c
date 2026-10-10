
void __thiscall FUN_004ae510(int param_1,int param_2)

{
  bool bVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int local_70;
  undefined1 local_64 [12];
  undefined1 local_58 [12];
  undefined1 local_4c [12];
  undefined1 local_40 [12];
  undefined1 local_34 [16];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d3f48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_path__OnImport_0072ba94);
  iVar4 = param_2;
  iVar5 = 0;
  local_4 = 0;
  local_24 = 0x7f7fffff;
  local_20 = 0x7f7fffff;
  local_1c = 0x7f7fffff;
  local_18 = 0xff7fffff;
  local_14 = 0xff7fffff;
  local_10 = 0xff7fffff;
  FUN_006403a0(&PTR_s_o_Load_Audio_Descriptor__s_00725864,local_40);
  FUN_00640500(s_Orient_00726120,local_4c);
  FUN_006403a0(s_Scale_00725a04,local_58);
  FUN_006404b0(&DAT_00726118,&local_24);
  FUN_004ad9f0(local_40,local_4c,local_58,&local_24);
  FUN_0063ff20();
  iVar4 = *(int *)(iVar4 + 0xc);
  *(int *)(param_1 + 0xc0) = iVar4;
  uVar3 = FUN_006747f0(iVar4 * 0xe);
  *(undefined4 *)(param_1 + 0xc4) = uVar3;
  bVar1 = true;
  local_70 = 0;
  if (0 < *(int *)(param_1 + 0xc0)) {
    do {
      FUN_0063ffc0();
      if ((bVar1) || (DAT_0075d378 != 0)) {
        iVar4 = FUN_006403a0(s_Position_00724d1c,local_64);
        if (iVar4 != 0) {
          DAT_0075d378 = 1;
          uVar2 = __ftol();
          *(undefined2 *)(iVar5 + *(int *)(param_1 + 0xc4)) = uVar2;
          uVar2 = __ftol();
          *(undefined2 *)(iVar5 + 2 + *(int *)(param_1 + 0xc4)) = uVar2;
          uVar2 = __ftol();
          *(undefined2 *)(iVar5 + 4 + *(int *)(param_1 + 0xc4)) = uVar2;
        }
        if ((!bVar1) && (DAT_0075d378 == 0)) goto LAB_004ae723;
        iVar4 = FUN_00640570(s_Orientation_0072b838,local_34);
        if (iVar4 == 0) goto LAB_004ae723;
        DAT_0075d378 = 1;
        uVar2 = __ftol();
        *(undefined2 *)(iVar5 + 6 + *(int *)(param_1 + 0xc4)) = uVar2;
        uVar2 = __ftol();
        *(undefined2 *)(iVar5 + 8 + *(int *)(param_1 + 0xc4)) = uVar2;
        uVar2 = __ftol();
        *(undefined2 *)(iVar5 + 10 + *(int *)(param_1 + 0xc4)) = uVar2;
        uVar2 = __ftol();
        *(undefined2 *)(iVar5 + 0xc + *(int *)(param_1 + 0xc4)) = uVar2;
      }
      else {
LAB_004ae723:
        FUN_00640450(&DAT_00726090,&param_2);
        *(undefined2 *)(iVar5 + *(int *)(param_1 + 0xc4)) = (undefined2)param_2;
        FUN_00640450(&DAT_00726088,&param_2);
        *(undefined2 *)(iVar5 + 2 + *(int *)(param_1 + 0xc4)) = (undefined2)param_2;
        FUN_00640450(&DAT_00726080,&param_2);
        *(undefined2 *)(iVar5 + 4 + *(int *)(param_1 + 0xc4)) = (undefined2)param_2;
        FUN_00640450(&DAT_00726078,&param_2);
        *(undefined2 *)(iVar5 + 6 + *(int *)(param_1 + 0xc4)) = (undefined2)param_2;
        FUN_00640450(&DAT_00726070,&param_2);
        *(undefined2 *)(iVar5 + 8 + *(int *)(param_1 + 0xc4)) = (undefined2)param_2;
        FUN_00640450(&DAT_00726068,&param_2);
        *(undefined2 *)(iVar5 + 10 + *(int *)(param_1 + 0xc4)) = (undefined2)param_2;
        FUN_00640450(&DAT_00726060,&param_2);
        *(undefined2 *)(iVar5 + 0xc + *(int *)(param_1 + 0xc4)) = (undefined2)param_2;
      }
      bVar1 = false;
      local_70 = local_70 + 1;
      iVar5 = iVar5 + 0xe;
    } while (local_70 < *(int *)(param_1 + 0xc0));
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

