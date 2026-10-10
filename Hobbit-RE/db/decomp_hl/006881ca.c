
/* WARNING: Type propagation algorithm not settling */

int __thiscall
FUN_006881ca(int param_1,int *param_2,RGBQUAD **param_3,int param_4,int *param_5,uint param_6,
            undefined4 param_7,uint param_8)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  HBITMAP h;
  uint *puVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  DWORD *pDVar8;
  BITMAPINFO *pBVar9;
  uint *puVar10;
  RGBQUAD *pRStack_158;
  uint uStack_154;
  _OSVERSIONINFOA local_12c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  undefined4 uStack_84;
  uint local_80;
  undefined4 uStack_7c;
  float local_78;
  float local_74;
  BITMAPINFO local_70;
  undefined4 local_44;
  int local_40;
  int local_3c;
  int local_38;
  uint *local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  tagRECT local_20;
  uint *local_10;
  uint local_c;
  uint *local_8;
  
  piVar6 = param_5;
  if ((param_3 != (RGBQUAD **)0x0) && (param_5 != (int *)0x0)) {
    uVar2 = param_5[2] - *param_5;
    uVar7 = param_5[3] - param_5[1];
    local_c = uVar7;
    if (param_8 != 0) {
      local_12c.dwOSVersionInfoSize = 0x94;
      GetVersionExA(&local_12c);
      puVar1 = PTR_FUN_0075b2ec;
      if (local_12c.dwPlatformId != 2) {
        uStack_154 = 0;
        pRStack_158 = (RGBQUAD *)0x0;
        local_8 = (uint *)(*(code *)PTR_FUN_0075b2ec)();
        FUN_006c04f0();
        (*(code *)puVar1)(0,0,param_3,param_4,&pRStack_158,local_8,0,0);
        param_8 = 0;
        param_4 = (int)local_8;
        uVar7 = local_c;
        param_3 = &pRStack_158;
      }
    }
    SelectObject(*(HDC *)(param_1 + 0x68),param_2);
    local_20.left = 0;
    local_20.top = 0;
    local_20.right = uVar2;
    local_20.bottom = uVar7;
    if (param_8 == 0) {
      iVar3 = DrawTextA(*(HDC *)(param_1 + 0x68),(LPCSTR)param_3,param_4,&local_20,param_6 | 0x400);
    }
    else {
      iVar3 = (*(code *)PTR_FUN_0075b2f0)();
    }
    local_20.right = local_20.right - local_20.left;
    local_20.left = 0;
    local_20.bottom = local_20.bottom - local_20.top;
    local_20.top = 0;
    param_5 = (int *)uVar2;
    uVar7 = local_c;
    if ((param_6 & 0x400) == 0) {
      if (((param_6 & 0x100) == 0) && (uVar2 <= (uint)local_20.right)) {
        local_20.right = uVar2;
      }
      param_5 = (int *)local_20.right;
      uVar7 = local_20.bottom;
      if (((param_6 & 0x100) == 0) && (uVar7 = local_20.bottom, local_c <= (uint)local_20.bottom)) {
        local_20.bottom = local_c;
        uVar7 = local_c;
      }
    }
    local_c = uVar7;
    if ((param_6 & 2) == 0) {
      local_30 = *piVar6;
      if ((param_6 & 1) != 0) {
        local_30 = (local_30 - local_20.right) + piVar6[2] >> 1;
      }
      local_28 = local_30 + local_20.right;
    }
    else {
      local_28 = piVar6[2];
      local_30 = local_28 - local_20.right;
    }
    if ((param_6 & 8) == 0) {
      local_2c = piVar6[1];
      if ((param_6 & 4) != 0) {
        local_2c = (local_2c - local_20.bottom) + piVar6[3] >> 1;
      }
      local_24 = local_2c + local_20.bottom;
    }
    else {
      local_24 = piVar6[3];
      local_2c = local_24 - local_20.bottom;
    }
    if ((param_6 & 0x400) != 0) {
      *piVar6 = local_30;
      piVar6[1] = local_2c;
      piVar6[2] = local_28;
      piVar6[3] = local_24;
      return iVar3;
    }
    if ((param_5 <= *(uint *)(param_1 + 0x70)) && (local_c <= *(uint *)(param_1 + 0x74))) {
LAB_006884c9:
      uVar7 = (uint)(*(ushort *)(param_1 + 0x7a) >> 3);
      puVar4 = *(uint **)(param_1 + 0x98);
      local_10 = (uint *)(uVar7 * (int)param_5);
      uVar7 = *(int *)(param_1 + 0x70) * uVar7 + 3 & 0xfffffffc;
      local_8 = (uint *)(uVar7 * local_c + (int)puVar4);
      for (; puVar4 < local_8; puVar4 = (uint *)((int)puVar4 + uVar7)) {
        puVar10 = puVar4;
        for (uVar2 = (uint)local_10 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar10 = 0;
          puVar10 = puVar10 + 1;
        }
        for (uVar2 = (uint)local_10 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
          *(undefined1 *)puVar10 = 0;
          puVar10 = (uint *)((int)puVar10 + 1);
        }
      }
      if (param_8 == 0) {
        iVar3 = DrawTextA(*(HDC *)(param_1 + 0x68),(LPCSTR)param_3,param_4,&local_20,param_6);
      }
      else {
        iVar3 = (*(code *)PTR_FUN_0075b2f0)();
      }
      if (*(int *)(param_1 + 0x50) != 0x15) {
        for (puVar4 = *(uint **)(param_1 + 0x98); puVar4 < local_8;
            puVar4 = (uint *)((int)puVar4 + (uVar7 - (int)local_10))) {
          puVar10 = (uint *)((int)puVar4 + (int)local_10);
          for (; puVar4 < puVar10; puVar4 = puVar4 + 1) {
            *puVar4 = *puVar4 << 0x18 | 0xffffff;
          }
        }
      }
      local_8 = *(uint **)(param_1 + 0x5c);
      if (local_8 == (uint *)0x0) {
        FUN_006880c7();
      }
      param_8 = 0;
      if (local_c != 0) {
        do {
          uVar7 = *(int *)(param_1 + 0x58) + param_8;
          if (local_c < uVar7) {
            uVar7 = local_c;
          }
          uVar2 = 0;
          if (param_5 != (int *)0x0) {
            do {
              local_90 = *(int *)(param_1 + 0x54) + uVar2;
              if (param_5 < local_90) {
                local_90 = (uint)param_5;
              }
              local_70.bmiColors[0].rgbBlue = '\0';
              local_70.bmiColors[0].rgbGreen = '\0';
              local_70.bmiColors[0].rgbRed = '\0';
              local_70.bmiColors[0].rgbReserved = '\0';
              local_44 = 0;
              local_40 = local_90 - uVar2;
              local_98 = uVar2;
              local_94 = param_8;
              local_8c = uVar7;
              local_3c = uVar7 - param_8;
              if (*(int *)(param_1 + 0x50) == 0x15) {
                iVar5 = (**(code **)(**(int **)(param_1 + 0x30 + *(int *)(param_1 + 8) * 4) + 0x24))
                                  ();
                if (iVar5 < 0) goto LAB_00688744;
                piVar6 = (int *)(*(int *)(param_1 + 0x98) +
                                (*(int *)(param_1 + 0x70) * param_8 + uVar2) * 4);
                for (puVar4 = local_34; puVar4 < (uint *)(local_38 * local_3c + (int)local_34);
                    puVar4 = (uint *)((int)puVar4 + local_38 + local_40 * -4)) {
                  local_10 = puVar4 + local_40;
                  for (; puVar4 < local_10; puVar4 = puVar4 + 1) {
                    *puVar4 = *piVar6 << 0x18 | 0xffffff;
                    piVar6 = piVar6 + 1;
                  }
                  piVar6 = piVar6 + (*(int *)(param_1 + 0x70) - local_40);
                }
                (**(code **)(**(int **)(param_1 + 0x30 + *(int *)(param_1 + 8) * 4) + 0x28))();
              }
              else {
                pRStack_158 = local_70.bmiColors;
                uStack_154 = *(uint *)(param_1 + 0x98);
                iVar5 = FUN_0067de8e(*(undefined4 *)(param_1 + 0x30 + *(int *)(param_1 + 8) * 4),0);
                if (iVar5 < 0) goto LAB_00688744;
              }
              uStack_7c = 0;
              uStack_84 = 0;
              local_80 = local_30 + uVar2;
              local_78 = (float)local_80;
              local_88 = local_2c + param_8;
              pRStack_158 = *(RGBQUAD **)(param_1 + 0xc);
              local_74 = (float)local_88;
              uStack_154 = *(uint *)(param_1 + 0x10 + *(int *)(param_1 + 8) * 4);
              iVar5 = (**(code **)((int)*pRStack_158 + 0x14))();
              if (iVar5 < 0) goto LAB_00688744;
              uVar2 = uVar2 + *(int *)(param_1 + 0x54);
              *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + 1U & 7;
            } while (uVar2 < param_5);
          }
          param_8 = param_8 + *(int *)(param_1 + 0x58);
        } while (param_8 < local_c);
      }
LAB_00688744:
      if (local_8 == (uint *)0x0) {
        FUN_00688109();
        return iVar3;
      }
      return iVar3;
    }
    local_10 = (uint *)0x0;
    pDVar8 = (DWORD *)(param_1 + 0x6c);
    pBVar9 = &local_70;
    for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
      (pBVar9->bmiHeader).biSize = *pDVar8;
      pDVar8 = pDVar8 + 1;
      pBVar9 = (BITMAPINFO *)&(pBVar9->bmiHeader).biWidth;
    }
    for (; (uint)local_70.bmiHeader.biWidth < param_5;
        local_70.bmiHeader.biWidth = local_70.bmiHeader.biWidth + (local_70.bmiHeader.biWidth >> 1))
    {
    }
    for (; (uint)local_70.bmiHeader.biHeight < local_c;
        local_70.bmiHeader.biHeight =
             local_70.bmiHeader.biHeight + (local_70.bmiHeader.biHeight >> 1)) {
    }
    local_70.bmiHeader.biHeight = -local_70.bmiHeader.biHeight;
    uStack_154 = 0x6883e9;
    h = CreateDIBSection(*(HDC *)(param_1 + 0x68),&local_70,0,&local_10,(HANDLE)0x0,0);
    if (h != (HBITMAP)0x0) {
      local_70.bmiHeader.biHeight = -local_70.bmiHeader.biHeight;
      SelectObject(*(HDC *)(param_1 + 0x68),h);
      DeleteObject(*(HGDIOBJ *)(param_1 + 0x94));
      *(HBITMAP *)(param_1 + 0x94) = h;
      *(uint **)(param_1 + 0x98) = local_10;
      *(LONG *)(param_1 + 0x70) = local_70.bmiHeader.biWidth;
      *(uint *)(param_1 + 0x54) = local_70.bmiHeader.biWidth;
      uStack_154 = *(uint *)(param_1 + 4);
      *(LONG *)(param_1 + 0x74) = local_70.bmiHeader.biHeight;
      *(LONG *)(param_1 + 0x58) = local_70.bmiHeader.biHeight;
      *(undefined4 *)(param_1 + 0x50) = 0x15;
      pRStack_158 = (RGBQUAD *)0x688449;
      iVar3 = FUN_0067e0c4();
      if (-1 < iVar3) {
        local_8 = (uint *)0x0;
        param_2 = (int *)(param_1 + 0x10);
        do {
          if ((int *)param_2[8] != (int *)0x0) {
            (**(code **)(*(int *)param_2[8] + 8))();
            param_2[8] = 0;
          }
          if ((int *)*param_2 != (int *)0x0) {
            (**(code **)(*(int *)*param_2 + 8))();
            *param_2 = 0;
          }
          uStack_154 = *(uint *)(param_1 + 0x54);
          pRStack_158 = *(RGBQUAD **)(param_1 + 4);
          iVar3 = FUN_0067e0ec();
          if (iVar3 < 0) {
            return 0;
          }
          iVar3 = (**(code **)(*(int *)*param_2 + 0x3c))();
          if (iVar3 < 0) {
            return 0;
          }
          local_8 = (uint *)((int)local_8 + 1);
          param_2 = param_2 + 1;
        } while (local_8 < 8);
        goto LAB_006884c9;
      }
    }
  }
  return 0;
}

