
int FUN_0067e26f(int *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_30 [8];
  uint local_10;
  int local_c;
  int *local_8;
  
  piVar1 = param_1;
  if (param_1 != (int *)0x0) {
    if (param_4 == 0xffffffff) {
      (**(code **)(*param_1 + 0x38))(param_1,0,local_30);
      iVar2 = FUN_0067da08(local_30[0]);
      param_4 = ((*(int *)(iVar2 + 4) != 3) - 1 & 0xfffffffd) + 5;
    }
    local_10 = (**(code **)(*piVar1 + 0x34))(piVar1);
    uVar3 = param_3;
    if (param_3 == 0xffffffff) {
      uVar3 = 0;
    }
    if (uVar3 < local_10) {
      local_8 = (int *)0x0;
      param_1 = (int *)0x0;
      if (((param_4 & 0xff) == 2) || (local_c = 0, (param_4 & 0xff) == 5)) {
        local_c = 1;
      }
      iVar2 = (**(code **)(*piVar1 + 0x3c))(piVar1,uVar3,&local_8);
      if (-1 < iVar2) {
        param_3 = uVar3 + 1;
        if (param_3 < local_10) {
          do {
            iVar2 = (**(code **)(*piVar1 + 0x3c))(piVar1,param_3,&param_1);
            if ((iVar2 < 0) ||
               (iVar2 = FUN_0067e152(param_1,param_2,0,local_8,param_2,0,param_4,0), iVar2 < 0))
            goto LAB_0067e379;
            if (local_c == 0) {
              if (param_1 != (int *)0x0) {
                (**(code **)(*param_1 + 8))(param_1);
                goto LAB_0067e369;
              }
            }
            else {
              if (local_8 != (int *)0x0) {
                (**(code **)(*local_8 + 8))(local_8);
              }
              local_8 = param_1;
LAB_0067e369:
              param_1 = (int *)0x0;
            }
            param_3 = param_3 + 1;
          } while (param_3 < local_10);
        }
        iVar2 = 0;
      }
LAB_0067e379:
      if (local_8 != (int *)0x0) {
        (**(code **)(*local_8 + 8))(local_8);
        local_8 = (int *)0x0;
      }
      if (param_1 == (int *)0x0) {
        return iVar2;
      }
      (**(code **)(*param_1 + 8))(param_1);
      return iVar2;
    }
  }
  return -0x7789f794;
}

