
int __thiscall FUN_00687f0d(int param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  BITMAPINFO *lpbmi;
  int iVar3;
  HDC hdc;
  HBITMAP pHVar4;
  uint uVar5;
  BITMAPINFO *pBVar6;
  undefined1 local_18 [16];
  uint local_8;
  
  *(int *)(param_1 + 0xa0) = DAT_00813028;
  DAT_00813028 = param_1;
  *(int **)(param_1 + 4) = param_2;
  (**(code **)(*param_2 + 4))(param_2);
  iVar3 = (**(code **)(**(int **)(param_1 + 4) + 0x24))(*(int **)(param_1 + 4),local_18);
  if (-1 < iVar3) {
    puVar1 = (undefined4 *)(param_1 + 0x58);
    puVar2 = (undefined4 *)(param_1 + 0x54);
    *puVar2 = 0x40;
    *puVar1 = 0x10;
    *(undefined4 *)(param_1 + 0x50) = 0x15;
    iVar3 = FUN_0067e0c4(*(undefined4 *)(param_1 + 4),puVar2,puVar1,0,0,
                         (undefined4 *)(param_1 + 0x50),1);
    if (-1 < iVar3) {
      local_8 = 0;
      param_2 = (int *)(param_1 + 0x10);
      do {
        iVar3 = FUN_0067e0ec(*(undefined4 *)(param_1 + 4),*puVar2,*puVar1,1,0,
                             *(undefined4 *)(param_1 + 0x50),1,param_2);
        if (iVar3 < 0) {
          return iVar3;
        }
        iVar3 = (**(code **)(*(int *)*param_2 + 0x3c))((int *)*param_2,0,param_2 + 8);
        if (iVar3 < 0) {
          return iVar3;
        }
        local_8 = local_8 + 1;
        param_2 = param_2 + 1;
      } while (local_8 < 8);
      uVar5 = 0;
      do {
        (**(code **)(**(int **)(param_1 + 4) + 0xd0))(*(int **)(param_1 + 4));
        (**(code **)(**(int **)(param_1 + 4) + 200))(*(int **)(param_1 + 4),7,0);
        iVar3 = param_1 + 0x60;
        if (uVar5 != 0) {
          iVar3 = param_1 + 100;
        }
        (**(code **)(**(int **)(param_1 + 4) + 0xd4))(*(int **)(param_1 + 4),iVar3);
        uVar5 = uVar5 + 1;
      } while (uVar5 < 2);
      iVar3 = FUN_0067d964(*(undefined4 *)(param_1 + 4),param_1 + 0xc);
      if (-1 < iVar3) {
        lpbmi = (BITMAPINFO *)(param_1 + 0x6c);
        pBVar6 = lpbmi;
        for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
          (pBVar6->bmiHeader).biSize = 0;
          pBVar6 = (BITMAPINFO *)&(pBVar6->bmiHeader).biWidth;
        }
        (lpbmi->bmiHeader).biSize = 0x28;
        *(undefined4 *)(param_1 + 0x70) = 0x100;
        *(undefined4 *)(param_1 + 0x74) = 0x100;
        *(undefined2 *)(param_1 + 0x78) = 1;
        *(undefined4 *)(param_1 + 0x7c) = 0;
        *(undefined2 *)(param_1 + 0x7a) = 0x20;
        *(undefined4 *)(param_1 + 0x9c) = 0x15;
        hdc = CreateCompatibleDC((HDC)0x0);
        *(HDC *)(param_1 + 0x68) = hdc;
        if (hdc != (HDC)0x0) {
          *(int *)(param_1 + 0x74) = -*(int *)(param_1 + 0x74);
          pHVar4 = CreateDIBSection(hdc,lpbmi,0,(void **)(param_1 + 0x98),(HANDLE)0x0,0);
          *(HBITMAP *)(param_1 + 0x94) = pHVar4;
          if (pHVar4 != (HBITMAP)0x0) {
            *(int *)(param_1 + 0x74) = -*(int *)(param_1 + 0x74);
            SetBkMode(*(HDC *)(param_1 + 0x68),2);
            SetBkColor(*(HDC *)(param_1 + 0x68),0);
            SetTextColor(*(HDC *)(param_1 + 0x68),0xffffff);
            SelectObject(*(HDC *)(param_1 + 0x68),*(HGDIOBJ *)(param_1 + 0x94));
            return 0;
          }
        }
        iVar3 = -0x7ff8fff2;
      }
    }
  }
  return iVar3;
}

