# Sample of dumping MNIST data by Python and reading it from C++

## Preparing a Python virtual environment

```sh
python3 -m venv myenv
source myenv/bin/activate
python3 -m pip install --upgrade pip
python3 -m pip install tensorflow
```

## Dump MNIST data to file

```sh
$ python3 dump.py
Dumped as mnist_train_data.dat
Dumped as mnist_train_label.dat
Dumped as mnist_test_data.dat
Dumped as mnist_test_label.dat
```

## Load from C++

```sh
g++ load.cpp
```

You will have the following output.

```txt
$ ./a.out
Dump Training data
label = 5
                            
                            
                            
                            
                            
                 ** ***     
           ************     
        **********          
        **********          
         * ***   *          
           **               
           ***              
            **              
             ***            
              ***           
               ****         
                 ***        
                 ***        
               *****        
             *******        
            ******          
          ******            
       *******              
     ********               
    *******                 
                            
                            
                            
label = 0
                            
                            
                            
                            
                ***         
               *****        
              ******        
             ***** **       
           ******* ***      
           **** **  **      
          ****      **      
         ****       ***     
        ***         ***     
        **          ***     
       ***          ***     
       **           ***     
       **          ***      
       **         ***       
       **        ***        
       **       ***         
       ***   *****          
       **********           
       ********             
         ****               
                            
                            
                            
                            
label = 4
                            
                            
                            
                            
                            
                     *      
                     *      
     *              **      
    **              **      
    **             **       
    **             **       
    **             **       
   **             ***       
   **            ***        
   **       ********        
   ************   **        
     *****        **        
                 ***        
                 **         
                 **         
                 **         
                 **         
                 ***        
                 ***        
                  **        
                            
                            
                            
label = 1
                            
                            
                            
                            
                            
                   **       
                  ***       
                  ***       
                 ***        
                ***         
               ****         
               ***          
              ***           
              ***           
             ***            
            ****            
           ****             
           ****             
          ****              
          ***               
         ****               
         ****               
         ***                
         ***                
         ***                
                            
                            
                            
label = 9
                            
                            
                            
                            
                            
                            
                            
             ****  *        
            *********       
           ***   ***        
          ***    ***        
        ****    ***         
        ***     ***         
       ***    ****          
       **   *****           
       **********           
        ****  ***           
              **            
              **            
              **            
              **            
              **            
              **            
              **            
               **           
               ***          
                **          
                            
label = 2
                            
                            
                            
                            
                            
                            
              ******        
            ********        
          ******  **        
          *****   **        
         *****    **        
                  **        
                 ***        
                 ***        
            *******         
          *********         
         **    *****        
       ****   ********      
      ***    ***    *****   
      **   ***        **    
     ********               
     ******                 
       *                    
                            
                            
                            
                            
                            
label = 1
                            
                            
                            
                            
            ***             
            ***             
            ***             
            ***             
            ***             
            ***             
             ***            
             ***            
             ***            
             ***            
             ***            
             ***            
             ****           
             ****           
             *****          
              ****          
              ****          
              ****          
               ***          
               ***          
                            
                            
                            
                            
label = 3
                            
                            
                            
                            
                            
              *******       
          ************      
         *************      
          ************      
                  ****      
                  ****      
                 ****       
               ******       
           ********         
         **********         
         **********         
                ***         
                 **         
                 **         
                ***         
      **       ****         
     *************          
     ************           
      *********             
        ***                 
                            
                            
                            
label = 1
                            
                            
                            
                            
                            
              *             
             **             
             **             
             **             
             **             
             **             
             ***            
             ***            
             ***            
             ***            
             ***            
              **            
              **            
              **            
              ***           
              **            
              **            
              **            
              **            
              **            
                            
                            
                            
label = 4
                            
                            
                            
                            
                      **    
                     ***    
                    ***     
                    ***     
             *      **      
            **     **       
            **     **       
           ***    ***       
           **    ***        
          ***    **         
         ****   ***         
        **********          
       ***  *******         
      **     ******         
             **             
            ***             
            **              
           ***              
          ***               
           *                
                            
                            
                            
                            
Dump Test data
label = 7
                            
                            
                            
                            
                            
                            
                            
       ***                  
      ***************       
          ************      
                   **       
                   **       
                  **        
                 ***        
                 **         
                ***         
                **          
                **          
               **           
              ***           
             ***            
             **             
            **              
           ***              
           ***              
           ***              
           **               
                            
label = 2
                            
                            
                            
            ****            
         ********           
        *********           
        ***    ***          
        **     **           
              ***           
              ***           
             ***            
             ***            
           ****             
           ***              
          ****              
          ***               
         ****               
        ****                
        ***                 
        ***           ****  
        ******************  
        ****************    
             *****          
                            
                            
                            
                            
                            
label = 1
                            
                            
                            
                            
                 *          
                 *          
                **          
                **          
                *           
               **           
               **           
               **           
              **            
              **            
              **            
             **             
             **             
             **             
            ***             
            **              
            **              
           ***              
           **               
           **               
                            
                            
                            
                            
label = 0
                            
                            
                            
                            
             ***            
             ***            
            ****            
           ******           
          *********         
         ***********        
         ******   **        
        ******    ***       
        ****       ***      
        ***        ***      
        **         ****     
       ***         ***      
       ***        ****      
       ***      *****       
       ***     ******       
       ***  ********        
        ************        
        **********          
         *******            
           ***              
                            
                            
                            
                            
label = 4
                            
                            
                            
                            
                            
           *                
           *       **       
          **        *       
          **        *       
         **        **       
        **         **       
        **        ***       
       **         **        
       **        ***        
       **        ***        
       **        **         
       ***    *****         
        ***********         
                ***         
                 **         
                 **         
                 **         
                ***         
                **          
                *           
                            
                            
                            
label = 1
                            
                            
                            
                            
                            
                 *          
                ***         
                ***         
               ***          
               ***          
              ****          
              ***           
              ***           
              ***           
             ***            
             ***            
             ***            
            ***             
            ***             
            ***             
            **              
           ***              
           ***              
           ***              
            *               
                            
                            
                            
label = 4
                            
                            
                            
                            
                            
          **                
         ***         **     
        ***         **      
        **          **      
       **          **       
      ***          **       
      ***        ***        
      *****    *****        
       ************         
         ****** ***         
                **          
               **           
               **           
              ***           
              **            
              **            
             ***            
             *** **         
             *****          
              *             
                            
                            
                            
label = 9
                            
                            
                            
                            
                            
                            
            **              
           ***              
          *****             
         *******            
         ********           
         **   ****          
         *    ****          
        ***   ****          
         **  *****          
         ****** ***         
          ****  ***         
           **    ***        
                  **        
                  **        
                   **       
                    **      
                    **      
                     **     
                     **     
                      *     
                            
                            
label = 5
                            
                            
                            
                            
                      *     
                *********   
             ************   
             ************   
         *   ****           
        **                  
       ***                  
      ***                   
      **                    
     ***                    
     ***                    
     ******                 
     **************         
       ************         
           *********        
            *** ****        
            ********        
            *******         
             ****           
               *            
                            
                            
                            
                            
label = 9
                            
                            
                            
                            
                            
                            
                            
               ***          
            **********      
          ************      
        ******   * ****     
        ***      *  ***     
       ***        *****     
       *** ***********      
       **************       
         ***********        
              ****          
              ***           
             ****           
            ****            
           ****             
           ****             
          ****              
          ***               
         ****               
         ***                
          *                 
                            
```

## LICENSE

MIT
# mnist_load
