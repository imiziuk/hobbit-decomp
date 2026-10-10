
int __thiscall FUN_006825f5(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auStack_d8 [216];
  
  if (param_2 == (int *)0x0) {
    iVar1 = -0x7789f794;
  }
  else {
    *(int **)(param_1 + 8) = param_2;
    (**(code **)(*param_2 + 4))(param_2);
    iVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x1c))(*(int **)(param_1 + 8),auStack_d8);
    if (-1 < iVar1) {
      uVar6 = 0;
      do {
        (**(code **)(**(int **)(param_1 + 8) + 0xd0))(*(int **)(param_1 + 8));
        (**(code **)(**(int **)(param_1 + 8) + 0x130))(*(int **)(param_1 + 8),0x144);
        (**(code **)(**(int **)(param_1 + 8) + 200))(*(int **)(param_1 + 8),0x80,0);
        (**(code **)(**(int **)(param_1 + 8) + 200))(*(int **)(param_1 + 8),8,3);
        (**(code **)(**(int **)(param_1 + 8) + 200))(*(int **)(param_1 + 8),0x16,1);
        (**(code **)(**(int **)(param_1 + 8) + 200))(*(int **)(param_1 + 8),0x88,1);
        (**(code **)(**(int **)(param_1 + 8) + 200))(*(int **)(param_1 + 8),0x97,0);
        (**(code **)(**(int **)(param_1 + 8) + 200))(*(int **)(param_1 + 8),0xa7,0);
        (**(code **)(**(int **)(param_1 + 8) + 200))(*(int **)(param_1 + 8),0xa4,1);
        (**(code **)(**(int **)(param_1 + 8) + 0xfc))(*(int **)(param_1 + 8),0,1,4);
        (**(code **)(**(int **)(param_1 + 8) + 0xfc))(*(int **)(param_1 + 8),0,2,2);
        (**(code **)(**(int **)(param_1 + 8) + 0xfc))(*(int **)(param_1 + 8),0,3,0);
        (**(code **)(**(int **)(param_1 + 8) + 0xfc))(*(int **)(param_1 + 8),0,4,4);
        (**(code **)(**(int **)(param_1 + 8) + 0xfc))(*(int **)(param_1 + 8),0,5,2);
        (**(code **)(**(int **)(param_1 + 8) + 0xfc))(*(int **)(param_1 + 8),0,6,0);
        (**(code **)(**(int **)(param_1 + 8) + 0xfc))(*(int **)(param_1 + 8),1,1,1);
        (**(code **)(**(int **)(param_1 + 8) + 0xfc))(*(int **)(param_1 + 8),1,4,1);
        (**(code **)(**(int **)(param_1 + 8) + 0xfc))(*(int **)(param_1 + 8),0,0x10,2);
        (**(code **)(**(int **)(param_1 + 8) + 0xfc))(*(int **)(param_1 + 8),0,0x11,2);
        piVar4 = *(int **)(param_1 + 8);
        uVar5 = 0;
        (**(code **)(*piVar4 + 0xfc))(piVar4,0,0x12,0);
        (**(code **)(**(int **)(param_1 + 8) + 0xfc))(*(int **)(param_1 + 8),0,0xb,0);
        (**(code **)(**(int **)(param_1 + 8) + 0xfc))(*(int **)(param_1 + 8),0,0xd,3);
        (**(code **)(**(int **)(param_1 + 8) + 0xfc))(*(int **)(param_1 + 8),0,0xe,3);
        (**(code **)(**(int **)(param_1 + 8) + 0xfc))(*(int **)(param_1 + 8),0,0x18,0);
        if ((((uint)piVar4 & 0x10) == 0) || ((uVar5 & 0x20) == 0)) {
          (**(code **)(**(int **)(param_1 + 8) + 200))(*(int **)(param_1 + 8),0xf,1);
          iVar1 = 0x19;
          (**(code **)(**(int **)(param_1 + 8) + 200))(*(int **)(param_1 + 8),0x19,7);
          uVar3 = 0x7f;
          uVar2 = 0x18;
        }
        else {
          (**(code **)(**(int **)(param_1 + 8) + 200))(*(int **)(param_1 + 8),0x1b,1);
          iVar1 = 0x13;
          (**(code **)(**(int **)(param_1 + 8) + 200))(*(int **)(param_1 + 8),0x13,5);
          uVar3 = 6;
          uVar2 = 0x14;
        }
        (**(code **)(**(int **)(param_1 + 8) + 200))(*(int **)(param_1 + 8),uVar2,uVar3);
        if (iVar1 == 0) {
          (**(code **)(**(int **)(param_1 + 8) + 0xf4))(*(int **)(param_1 + 8),0,0);
          (**(code **)(**(int **)(param_1 + 8) + 0x14c))(*(int **)(param_1 + 8),0,0,0);
          iVar1 = param_1 + 0x10;
        }
        else {
          iVar1 = param_1 + 0x14;
        }
        (**(code **)(**(int **)(param_1 + 8) + 0xd4))(*(int **)(param_1 + 8),iVar1);
        uVar6 = uVar6 + 1;
      } while (uVar6 < 2);
      iVar1 = 0;
    }
  }
  return iVar1;
}

